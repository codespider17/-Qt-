#include "orderpage.h"
#include "ui_orderpage.h"
#include"qsqlrecord.h"
OrderPage::OrderPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrderPage)
{
    //将数据库加载到tableweidget中

    ui->setupUi(this);
    QString dbName = "client.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    bool isOpen = db.open();

    if (!isOpen) {
        QMessageBox::critical(this, "错误", "无法打开数据库: " + db.lastError().text());
        return;
    }
    QString tableName = "t_" + userLogId;
    // 查询数据
    QSqlQuery query;
    query.prepare(QString("SELECT * FROM %1 ").arg(tableName));

    if (!query.exec()) {
        qDebug() << "Query execution failed: " << query.lastError().text();
        return;
    }
    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛类型","比赛名称", "时间", "地点", "主场", "价格"}); // 根据实际列名设置

    // 填充表格
    int rowCount = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(rowCount);
        for (int column = 0; column < query.record().count(); ++column) {
            ui->tableWidget->setItem(rowCount, column, new QTableWidgetItem(query.value(column).toString()));
        }
        rowCount++;
    }

    // 自适应列宽
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


OrderPage::~OrderPage()
{
    delete ui;
}

void OrderPage::on_toUserPage_clicked()
{
    emit this->toUserPage();
}


void OrderPage::on_backTicket_clicked()
{
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty()){
        qDebug()<<"选中了这行";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "确认框", "你确定要退票吗?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QString dbName = "client.db";
            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName(dbName);
            bool isOpen = db.open();

            if (!isOpen) {
                QMessageBox::critical(this, "错误", "无法打开数据库: " + db.lastError().text());
                return;
            }
            int balance=0;
            int spprice=0;
            int spticket=0;
            int nowRow = ui->tableWidget->currentRow();
            QString firstColumnValue = ui->tableWidget->item(nowRow, 1)->text();
            QString tableName1 = "m_"+userLogId;   //余额表名
            QString tableName2 =firstColumnValue;     //价格和票数表名
            //查询用户余额
            if(isOpen){
                QSqlQuery query(db);

                // 从表中获取 blance 信息
                QString selectQuery = QString("SELECT balance FROM %1").arg(tableName1);
                if (query.exec(selectQuery)) {
                    while (query.next()) { // 遍历查询结果
                        balance = query.value(0).toInt(); // 获取 balance 值并转换为 int
                        qDebug() << "获取的 balance 值:" << balance;
                    }
                }
                else {
                    qDebug() << "查询失败:" << query.lastError().text();
                }
            }
            else {
                qDebug() << "数据库打开失败:" << db.lastError().text();
            }
            //查询票价和票数
            if(isOpen){
                QSqlQuery query(db);

                //从现在的体育赛事中查询票价
                int nowrow = ui->tableWidget->currentRow();
                QString idValue= ui->tableWidget->item(nowrow, 0)->text();
                QString selectQuery = QString("SELECT spprice, spticket FROM %1 WHERE id = :idValue").arg(tableName2);
                query.prepare(selectQuery);
                query.bindValue(":idValue", idValue);
                if (query.exec()) {
                    while (query.next()) { // 遍历查询结果
                        spprice = query.value(0).toInt(); // 获取 spprice 值并转换为 int
                        spticket=query.value(1).toInt();
                        qDebug() << "获取的 spprice 值:" << spprice;
                        qDebug()<<"获取的spticket值:"<<spticket;
                    }
                }
                else {
                    qDebug() << "查询票价或票数失败:" << query.lastError().text();
                }
            }
            else {
                qDebug() << "数据库打开失败:" << db.lastError().text();
            }

                // 构建 SQL 插入语句
                QSqlQuery query(db);
                //叠加值
                balance+=spprice;
                // 构建 SQL 更新语句
                QString updateQuery = QString("UPDATE %1 SET balance = :newValue").arg(tableName1);

                query.prepare(updateQuery);
                query.bindValue(":newValue", balance);
                if (!query.exec()) {
                    qDebug() << "更新失败:" << query.lastError().text();
                } else {
                    qDebug() << "余额为:" << balance;
                }
                int nowticket = spticket + 1; // 计算更新后的票数

                // 构建更新语句，包含 WHERE 子句来限制更新的范围
                QString idValue= ui->tableWidget->item(nowRow, 0)->text();
                QString updateString = QString("UPDATE %1 SET spticket = :nowticket WHERE id = :idValue")
                                           .arg(tableName2);

                // 准备查询
                query.prepare(updateString);

                // 绑定参数
                query.bindValue(":nowticket", nowticket); // 绑定nowticket参数
                query.bindValue(":idValue", idValue);  // 确保 idValue 是你想要更新的具体 ID

                // 执行更新
                if (!query.exec()) {
                    qDebug() << "Update error:" << query.lastError().text();
                } else {
                    qDebug() << "票数更新成功!";
                }
                //退订球票
                QString deltable="t_"+userLogId;
                int dangrow=ui->tableWidget->currentRow();
                query.prepare(QString("DELETE FROM %1 WHERE id = :idValue").arg(deltable)); // 使用动态表名
                query.bindValue(":sportstype", tableName2);
                query.bindValue(":idValue", idValue);  // 确保 idValue 是你想要更新的具体 ID
                if (!query.exec()) {
                    qDebug() << "删除数据库记录失败:" << query.lastError().text();
                } else {
                    qDebug() << "数据库记录删除成功";
                }
                //更新总表球票
                QString AlltableName="a_000000";
                QSqlQuery ALLtable(db);
                QString updateAlltable = QString("UPDATE %1 SET spticket = :nowticket WHERE id = :idValue")
                                             .arg(AlltableName);
                ALLtable.prepare(updateAlltable);
                ALLtable.bindValue(":nowticket", nowticket); // 绑定nowticket参数
                ALLtable.bindValue(":idValue", idValue);
                // 执行更新
                if (!ALLtable.exec()) {
                    qDebug() << "Update error:" << ALLtable.lastError().text();
                } else {
                    qDebug() << "总表票数更新成功!";
                }
                // 从 QTableWidget 中删除当前行
                ui->tableWidget->removeRow(dangrow);
                QMessageBox::information(this,"提示","退票成功");
        }
    }
    else{
        QMessageBox::warning(this,"警告","请先选择一行再进行操作");
    }
    ui->tableWidget->clearSelection(); // 清除选中状态
}

