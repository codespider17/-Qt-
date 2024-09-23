#include "userpage.h"
#include "ui_userpage.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
#include <QWidget>
#include<QMessageBox>
#include <QMainWindow>
#include <QPainter>
#include <QString>
userPage::userPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::userPage)
{
    ui->setupUi(this);
    // connect(ui->balance,&QPushButton::clicked,this,&userPage::balance_clicked);
    // 设置按钮的大小策略为自动调整大小
    ui->buyticket->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->recharge->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->balance->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    ui->ticketinfo->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    // 创建图标
    QIcon icon1("/Qt-picture/CR71.jpg");
    QIcon icon2("/Qt-picture/DB2.jpg");
    QIcon icon3("/Qt-picture/BL.jpg");
    QIcon icon4("/Qt-picture/NM.jpg");
    ui->buyticket->setIcon(icon1);
    ui->recharge->setIcon(icon2);
    ui->balance->setIcon(icon3);
    ui->ticketinfo->setIcon(icon4);
    // 设置图标大小为按钮的大小
    ui->buyticket->setIconSize(ui->buyticket->size());
    ui->recharge->setIconSize(ui->recharge->size());
    ui->balance->setIconSize(ui->balance->size());
    ui->ticketinfo->setIconSize(ui->ticketinfo->size());
}

userPage::~userPage()
{
    delete ui;
}

void userPage::on_tologinPage_clicked()
{
    emit this->tologinPage();
}


void userPage::on_buyticket_clicked()
{
    BuyTicketPage *buyticket=new BuyTicketPage;
    buyticket->show();
    this->hide();
    connect(buyticket,&BuyTicketPage::toUserPage,[=](){
        this->show();
        buyticket->hide();
    });
}





void userPage::on_recharge_clicked()
{
    ReCharge*recharge=new ReCharge;
    recharge->show();
    this->hide();
    connect(recharge,&ReCharge::toUserpage,[=](){
        this->show();
        recharge->hide();
    });
}


void userPage::on_ticketinfo_clicked()
{
    OrderPage*orderpage=new OrderPage;
    orderpage->show();
    this->hide();
    connect(orderpage,&OrderPage::toUserPage,[=](){
        this->show();
        orderpage->hide();
    });
}


void userPage::on_balance_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }
    QSqlQuery query(db);
    QString tableName = "m_"+userLogId;
    // 从表中获取 blance 信息
    QString selectQuery = QString("SELECT balance FROM %1").arg(tableName);
    if (query.exec(selectQuery)) {
        while (query.next()) { // 遍历查询结果
            int balance = query.value(0).toInt(); // 获取 balance 值并转换为 int
            qDebug() << "获取的 balance 值:" << balance;
            QString message = QString("您的余额为: %1").arg(QString::number(balance));

            QMessageBox::information(this, "余额查询", message);
        }
    }
    else {
        qDebug() << "查询失败:" << query.lastError().text();
    }
}

