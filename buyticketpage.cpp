#include "buyticketpage.h"
#include "ui_buyticketpage.h"
#include"global.h"
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
#include <QPushButton>
BuyTicketPage::BuyTicketPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BuyTicketPage)
{
    ui->setupUi(this);
    nowsport="sport1";
    //转英超
    connect(ui->yingchao,&QPushButton::clicked,this,&BuyTicketPage::on_yingchao_clicked);
    //转西甲
    connect(ui->xijia,&QPushButton::clicked,this,&BuyTicketPage::on_xijia_clicked);
    //转中超排面拉满
    connect(ui->zhongchao,&QPushButton::clicked,this,&BuyTicketPage::on_zhongchao_clicked);
    //转德甲
    connect(ui->dejia,&QPushButton::clicked,this,&BuyTicketPage::on_dejia_clicked);
    //转法甲
    connect(ui->fajia,&QPushButton::clicked,this,&BuyTicketPage::on_fajia_clicked);
    //转意甲
    connect(ui->yijia,&QPushButton::clicked,this,&BuyTicketPage::on_yijia_clicked);
    //点击购票
    connect(ui->payticket,&QPushButton::clicked,this,&BuyTicketPage::payticket_clicked);
    //判断是否存在
    QString dbName="client.db";
    QFileInfo info(dbName);
    bool isExits=info.exists();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(dbHostName);       //选择本地主机
    db.setDatabaseName(dbName);                            //设置数据源名称
    db.setUserName(dbusername);                         //登录用户
    db.setPassword(dbpassword);                         //密码
    bool isOpen=db.open();
    if(isOpen){
        if(!isExits)
        {
            QSqlQuery query(db);
            bool ok1=query.exec("CREATE TABLE sport1 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok2=query.exec("INSERT INTO sport1 ( id,spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "( 1,'曼城VS曼联', '9月30日', '老特拉福德球场', '曼联', 200, 1000 )");
            bool ok3=query.exec("CREATE TABLE sport2 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok4=query.exec("INSERT INTO sport2 ( id,spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "( 2,'皇马VS巴萨', '9月29日', '伯纳乌球场', '皇马', 500, 1400 )");
            bool ok5=query.exec("CREATE TABLE sport3 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok6=query.exec("INSERT INTO sport3 ( id,spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "(3, '上海海港VS成都蓉城', '9月29日', '上海浦东足球场', '上海海港', 100, 2100 )");
            bool ok7=query.exec("CREATE TABLE sport4 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok8=query.exec("INSERT INTO sport4 (id, spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "( 4,'拜仁VS多特', '9月25日', '纳信号公园球场', '多特', 600, 500 )");
            bool ok9=query.exec("CREATE TABLE sport5 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok10=query.exec("INSERT INTO sport5 (id, spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "(5, '大巴黎VS摩纳哥', '9月24日', '王子公园球场', '大巴黎', 300, 1120 )");
            bool ok11=query.exec("CREATE TABLE sport6 ("
                                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                  "spname nchar ( 20 )  NOT NULL,"
                                  "sptime nchar ( 8 ) NOT NULL,"
                                  "spplace nchar(20) NOT NULL,"
                                  "sphost nchar(10) NOT NULL,"
                                  "spprice INT,"
                                  "spticket INT "
                                  ");");
            bool ok12=query.exec("INSERT INTO sport6 (id, spname, sptime, spplace, sphost, spprice, spticket )"
                                  "VALUES"
                                  "( 6,'国际米兰VS尤文图斯', '9月28日', '梅阿查体育场', '国际米兰', 230, 600 )");
            if(ok1&&ok2&&ok3&&ok4&&ok5&&ok6&&ok7&&ok8&&ok9&&ok10&&ok11&&ok12)
                qDebug()<<"创建表成功";
            else qDebug()<<"创建表失败";
        }
        else{
            qDebug()<<"表已经存在";
        }
    }
    populateTableWidget();
}

BuyTicketPage::~BuyTicketPage()
{
    delete ui;
}

void BuyTicketPage::on_toUserPage_clicked()
{
    emit this->toUserPage();
}
void BuyTicketPage::populateTableWidget() {
    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport1");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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

void BuyTicketPage::on_xijia_clicked()
{
    // 连接到数据库
    nowsport="sport2";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport2");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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


void BuyTicketPage::on_zhongchao_clicked()
{
    // 连接到数据库
    nowsport="sport3";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport3");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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


void BuyTicketPage::on_yingchao_clicked()
{
    nowsport="sport1";
    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport1");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());


    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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


void BuyTicketPage::on_dejia_clicked()
{
    nowsport="sport4";
    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport4");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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


void BuyTicketPage::on_fajia_clicked()
{
    nowsport="sport5";
    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport5");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());
    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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


void BuyTicketPage::on_yijia_clicked()
{
    nowsport="sport6";
    // 连接到数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("client.db");

    if (!db.open()) {
        qDebug() << "Database error occurred: " << db.lastError().text();
        return;
    }

    // 执行查询
    QSqlQuery query("SELECT * FROM sport6");
    int rowCount = 0;

    // 设置表格行数和列数
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(query.record().count());

    ui->tableWidget->setHorizontalHeaderLabels({"比赛编号","比赛名称", "时间","地点","主场","价格","剩余票数"}); // 根据实际列名设置
    // 填充表格
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

void BuyTicketPage::payticket_clicked()
{
    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    if(!items.empty()){
         qDebug()<<"选中了这行";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "确认框", "你确定要购票吗?", QMessageBox::Yes | QMessageBox::No);

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
             QString tableName1 = "m_"+userLogId;   //余额表名
             QString tableName2 = nowsport;     //价格和票数表名
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
            if(spticket<=0){
                QMessageBox::warning(this,"警告","票已售空无法购买！");
            }
            else{
                //对比
                if(balance<spprice){
                    QMessageBox::warning(this,"警告","余额不足,请先充值！");
                }
                else{
                    QString tableName3 = userLogId;  //订购信息表
                    if (!tableName3.isEmpty() && !tableName3[0].isLetter()) {
                        tableName3 = "t_" + tableName3; // 追加前缀
                    }
                    int currentRow=ui->tableWidget->currentRow();
                    QString id=ui->tableWidget->item(currentRow, 0)->text();
                    QString sportstype=nowsport;   //第一列
                    QString spname = ui->tableWidget->item(currentRow, 1)->text(); // 第二列
                    QString sptime = ui->tableWidget->item(currentRow, 2)->text(); // 第三列
                    QString spplace = ui->tableWidget->item(currentRow, 3)->text(); // 第四列
                    QString sphost = ui->tableWidget->item(currentRow, 4)->text(); // 第五列
                    int price = ui->tableWidget->item(currentRow, 5)->text().toInt(); // 第六列 (INT)
                    qDebug()<<"现在的体育种类："<<sportstype;
                    // 构建 SQL 插入语句
                    QSqlQuery query(db);
                    QString insertQuery = QString("INSERT INTO %1 (id,sportstype,spname, sptime, spplace, sphost, spprice) "
                                                  "VALUES (:id,:sportstype,:spname, :sptime, :spplace, :sphost, :price)").arg(tableName3);
                    query.prepare(insertQuery);
                    // 绑定参数
                    query.bindValue(":id",id);
                    query.bindValue(":sportstype",sportstype);
                    query.bindValue(":spname", spname);
                    query.bindValue(":sptime", sptime);
                    query.bindValue(":spplace", spplace);
                    query.bindValue(":sphost", sphost);
                    query.bindValue(":price", spprice);

                    // 执行查询
                    if (!query.exec()) {
                        qDebug() << "Insert failed:" << query.lastError().text();
                    } else {
                        qDebug() << "购票成功";
                        QMessageBox::information(this,"提示","购票成功");
                    }
                    //叠加值
                    balance-=spprice;
                    // 构建 SQL 更新语句
                    QString updateQuery = QString("UPDATE %1 SET balance = :newValue").arg(tableName1);

                    query.prepare(updateQuery);
                    query.bindValue(":newValue", balance);
                    if (!query.exec()) {
                        qDebug() << "更新失败:" << query.lastError().text();
                    } else {
                        qDebug() << "买票后余额为:" << balance;
                    }
                    QSqlQuery updatesportstable(db);
                    int nowrow = ui->tableWidget->currentRow();
                    QString idValue= ui->tableWidget->item(nowrow, 0)->text();
                    int nowticket=spticket-1;
                    // 构建更新语句
                    QString updateString = QString("UPDATE %1 SET spticket = :nowticket WHERE id = :idValue")
                                               .arg(tableName2);
                    // 准备查询
                    updatesportstable.prepare(updateString);
                    updatesportstable.bindValue(":nowticket", nowticket); // 绑定nowticket参数
                    updatesportstable.bindValue(":idValue", idValue);
                    if (!updatesportstable.exec()) {
                        qDebug() << "Update error:" << updatesportstable.lastError().text();
                    } else {
                        qDebug()<<"票数减1后的票数:"<<nowticket;
                    }
                    //更新总表
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
                    int nowRow = items.first()->row();
                    qDebug() << "nowRow:" << nowRow;
                    qDebug() << "nowticket:" << nowticket; // 确保这个值不是空的

                    // 确保行索引有效
                    if (nowRow >= 0 && nowRow < ui->tableWidget->rowCount()) {
                        ui->tableWidget->setItem(nowRow, 6, new QTableWidgetItem(QString::number(nowticket)));
                    } else {
                        qDebug() << "Invalid row index!";
                    }
                    // 强制更新表格
                    ui->tableWidget->update();
                }
            }

        }
    }
    else{
        QMessageBox::warning(this,"警告","请先选择一行再进行操作");
    }
    ui->tableWidget->clearSelection(); // 清除选中状态
}
