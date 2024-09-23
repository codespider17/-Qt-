#include "signup.h"
#include "ui_signup.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
SignUp::SignUp(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);

}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_tologinPage_clicked()
{
    emit this->tologinPage();
}

void SignUp::getInformation()
{

    userid=removeSpace(ui->nameEdit->text());
    userpass=removeSpace(ui->passwordEdit->text());
    againpass=removeSpace(ui->againEdit->text());

    qDebug()<<userid<<userpass<<againpass;
}

bool SignUp::setInformation()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(dbHostName);       //选择本地主机
    db.setDatabaseName("client.db");                            //设置数据源名称
    db.setUserName(dbusername);                         //登录用户
    db.setPassword(dbpassword);                         //密码
    bool isOpen=db.open();
    if(isOpen)
    {
        QSqlQuery query(db);
        query.exec("select count(*) from userpasstable where userid='"+userid+"'");
        query.next();
        int num;
        num=query.value(0).toInt();
        if(num)
        {
            qDebug()<<"账号已经存在";
            QMessageBox::critical(this,"警告","此用户已经存在!\n请重新输入");
            return false;
        }
        else
        {
            query.exec("insert into userpasstable(userid,userpass)"
                       "values ('"+userid+"','"+userpass+"')");

            QMessageBox::information(this,"提示","添加用户成功");

        }

    }
    else qDebug()<<"打开数据库失败";
}
void SignUp::on_submitBtn_clicked()
{
    getInformation();
    //判断学号是否正确
    if(userpass!=againpass){
        QMessageBox::critical(this,"警告","两次密码不一致\n请重新输入");
    }
    else if(isProperId(userid))
    {

        qDebug()<<"账号正确";
        if(userid !="" && isProperPassword(userpass) && userpass != ""){
             setInformation();
            this->hide();
             emit this->tologinPage();
        }

        else QMessageBox::critical(this,"警告","添加失败！\n账号，密码，姓名三项不能为空!");
    }
    else QMessageBox::critical(this,"警告","用户格式错误");
}

void SignUp::on_pushButton_clicked()
{
    ui->nameEdit->setText("");
    ui->passwordEdit->setText("");
    ui->againEdit->setText("");
}

