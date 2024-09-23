#include "addsports.h"
#include "ui_addsports.h"

addSports::addSports(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addSports)
{
    ui->setupUi(this);
    connect(ui->okBtn,&QPushButton::clicked,this,&addSports::okBtn_clicked);
}

addSports::~addSports()
{
    delete ui;
}



void addSports::on_noBtn_clicked()
{
    emit this->toAdminPage();
}


void addSports::okBtn_clicked()
{
    QString id=ui->gamenumber->text();
    QString sportstype = ui->sportsType->currentText(); //获取文本
    qDebug()<<sportstype;
    QString  spname=ui->gamename->text();
    QString  sptime=ui->gameTime->text();
    QString  spplace=ui->gamePlace->text();
    QString  sphost=ui->gameHost->text();
    int spprice=ui->ticketPrice->text().toInt();
    int spticket=ui->ticketCount->text().toInt();
    QString dbName = "client.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbName);
    bool isOpen = db.open();
    if (!isOpen) {
        QMessageBox::critical(this, "错误", "无法打开数据库: " + db.lastError().text());
        return;
    }
    QString tableName="a_"+userLogId;
    // 构建 SQL 插入语句
    QSqlQuery query(db);
    QString insertQuery = QString("INSERT INTO %1 (id,sportstype,spname, sptime, spplace, sphost, spprice,spticket) "
                                  "VALUES (:id,:sportstype,:spname, :sptime, :spplace, :sphost, :spprice,:spticket)").arg(tableName);
    query.prepare(insertQuery);
    // 绑定参数
    query.bindValue(":id",id);
    query.bindValue(":sportstype",sportstype);
    query.bindValue(":spname", spname);
    query.bindValue(":sptime", sptime);
    query.bindValue(":spplace", spplace);
    query.bindValue(":sphost", sphost);
    query.bindValue(":spprice", spprice);
    query.bindValue(":spticket", spticket);
    // 执行查询
    if (!query.exec()) {
        qDebug() << "Insert a_+userLogin failed:" << query.lastError().text();
    } else {
        qDebug() << "添加球票成功";
        QMessageBox::information(this,"提示","添加球票成功");
    }
    QSqlQuery userTable(db);
    QString userTableName=sportstype;
    QString insertuserTable = QString("INSERT INTO %1 (id,spname, sptime, spplace, sphost, spprice,spticket) "
                                  "VALUES (:id,:spname, :sptime, :spplace, :sphost, :spprice,:spticket)").arg(userTableName);
    userTable.prepare(insertuserTable);
    // 绑定参数
    userTable.bindValue(":id",id);
    userTable.bindValue(":spname", spname);
    userTable.bindValue(":sptime", sptime);
    userTable.bindValue(":spplace", spplace);
    userTable.bindValue(":sphost", sphost);
    userTable.bindValue(":spprice", spprice);
     userTable.bindValue(":spticket", spticket);
    // 执行查询
    if (!userTable.exec()) {
        qDebug() << "Insert usertable failed:" << userTable.lastError().text();
    } else {
        qDebug() << "添加user表数据成功";
    }


}


void addSports::on_clearBtn_clicked()
{
    ui->gamenumber->setText("");
    ui->sportsType->setCurrentIndex(0);
    ui->gamename->setText("");
    ui->gameTime->setText("");
    ui->gamePlace->setText("");
    ui->gameHost->setText("");
    ui->ticketPrice->setValue(0);
    ui->ticketCount->setValue(0);
}

