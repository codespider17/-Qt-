#include "recharge.h"
#include "ui_recharge.h"
#include"global.h"
#include <QPainter>
#include <QApplication>
#include <QWidget>
ReCharge::ReCharge(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ReCharge)
{
    ui->setupUi(this);

    // 设置按钮的大小策略为自动调整大小
    ui->chargepicture->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    // 创建图标
    QIcon icon("/Qt-picture/paywechat.jpg");
    ui->chargepicture->setIcon(icon);

    // 设置图标大小为按钮的大小
    ui->chargepicture->setIconSize(ui->chargepicture->size());


}

ReCharge::~ReCharge()
{
    delete ui;
}

void ReCharge::on_toLoginPage_clicked()
{
    emit this->toUserpage();
}


void ReCharge::on_confirmBtn_clicked()
{
    ui->chargeBox->setRange(0,1000);
    int chargeM=ui->chargeBox->value();

    if(chargeM<=0){
        QMessageBox::information(this,"警告","请选择充值金额");
    }
    else{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "确认框", "你确定要充值吗?", QMessageBox::Yes | QMessageBox::No);
        if(reply==QMessageBox::Yes){
            QString dbName = "client.db";
            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName(dbName);
            bool isOpen = db.open();

            if (!isOpen) {
                QMessageBox::critical(this, "错误", "无法打开数据库: " + db.lastError().text());
                return;
            }

            QSqlQuery query(db);
            int balance=0;
            //查询原来余额
            QString tableName = "m_"+userLogId;
            QString selectQuery = QString("SELECT balance FROM %1").arg(tableName);
            if (query.exec(selectQuery)) {
                while (query.next()) { // 遍历查询结果
                    balance = query.value(0).toInt(); // 获取 balance 值并转换为 int
                }
            }
            else {
                qDebug() << "查询失败:" << query.lastError().text();
            }

            //叠加值
            balance+=chargeM;
            // 构建 SQL 更新语句
            QString updateQuery = QString("UPDATE %1 SET balance = :newValue").arg(tableName);

            query.prepare(updateQuery);
            query.bindValue(":newValue", balance);
            if (!query.exec()) {
                qDebug() << "更新失败:" << query.lastError().text();
            } else {
                QMessageBox::information(this,"提示","充值成功！");
                ui->chargeBox->setValue(0);
                qDebug() << "充值成功，新的值为:" << balance;
            }


        }
    }
}

