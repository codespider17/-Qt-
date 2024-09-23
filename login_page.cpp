#include "login_page.h"
#include "ui_login_page.h"

#include <QHeaderView>

Login_page::Login_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login_page)
{
    ui->setupUi(this);
     createdatebase();
}

Login_page::~Login_page()
{
    delete ui;
}
void Login_page::createdatebase()
{

    //判断是否存在
    QString dbName="client.db";
    QFileInfo info(dbName);
    bool isExits=info.exists();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName(dbHostName);       //选择本地主机
    db.setDatabaseName(dbName);       //设置数据源名称
    db.setUserName(dbusername);       //登录用户
    db.setPassword(dbpassword);       //密码
    bool isOpen=db.open();
    if(isOpen)
    {

        //不纯在数据库，创建表
        if(!isExits)
        {
            QSqlQuery query(db);
            bool ok1=query.exec("CREATE TABLE admintable ( adid nchar ( 5 ) PRIMARY KEY NOT NULL, adpass nchar ( 20 ) NOT NULL );");
            bool ok2=query.exec("INSERT INTO admintable ( adid, adpass ) VALUES ( '55555', '12345678' ),( '11111', '12345678' );");
            bool ok3=query.exec("CREATE TABLE userpasstable ( userid char ( 6 ) PRIMARY KEY NOT NULL, userpass nchar ( 20 ) NOT NULL );");
            bool ok4=query.exec("INSERT INTO userpasstable ( userid, userpass )"
                                  "VALUES"
                                  "( '999999', '66666' ),"
                                  "( '888888', '00000' ), "
                                  "( '777777', '11111' ); ");

            if(ok1&&ok2&&ok3&&ok4)
                qDebug()<<"创建表成功";
            else qDebug()<<"创建表失败";
        }
        else qDebug()<<"表已存在";
    }
    db.close();
}
bool Login_page::checkpassword(bool flag_pos, QString getId, QString getPass)
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
        if(flag_pos)//1管理员 0代表学生
        {
            query.exec("select adpass from admintable where adid='"+getId+"'");
        }
        else
        {
            query.exec("select userpass from userpasstable where userid='"+getId+"'");
        }
        query.next();
        QString str=query.value(0).toString();
        str=removeSpace(str);
        qDebug()<<"获取到的密码是："<<str;
        if(str==getPass)
        {
            qDebug()<<"密码正确";
            return true;
        }
        else
        {
            qDebug()<<"密码错误";
            return false;
        }
    }
     db.close();
}

void Login_page::on_exitBtn_clicked()
{
    exit(0);
}


void Login_page::on_loginBtn_clicked()
{
    QString getId=removeSpace(ui->userBtn->text());
    QString getPass=removeSpace(ui->passwordBtn->text());
    bool flag_pos;//管理员为1，学生为0

    if(ui->radioButton->isChecked())
        flag_pos=1;
    else flag_pos=0;

    if(checkpassword(flag_pos,getId,getPass) && getId != "")
    {
        userLogId=getId;

        qDebug()<<"userLogId1:"<<userLogId;
        this->hide();
        if(flag_pos==1)
        {
            adminPage * adminscreen=new adminPage;
            adminscreen->show();
            connect(adminscreen,&adminPage::tologinPage,[=](){
                this->show();
                adminscreen->hide();
            });

            QString dbName = "client.db";
            QFileInfo info(dbName);
            bool isExists = info.exists();

            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setHostName(dbHostName); // 选择本地主机
            db.setDatabaseName(dbName); // 设置数据源名称
            db.setUserName(dbusername); // 登录用户
            db.setPassword(dbpassword); // 密码
            bool isOpen = db.open();
            if(isOpen){
                QString tableName = "a_"+userLogId; // 表名可以为变量
                QSqlQuery checkadmin(db);
                checkadmin.exec(QString("SELECT name FROM sqlite_master WHERE type='table' AND name='%1';").arg(tableName));
                if (!checkadmin.next()) { // 如果没有找到表
                    // 使用变量动态构建 SQL 查询
                    QString createTableQuery = QString("CREATE TABLE \"%1\" ("
                                                       "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                                       "sportstype nchar(8) NOT NULL,"
                                                       "spname nchar(20) NOT NULL,"
                                                       "sptime nchar(8) NOT NULL,"
                                                       "spplace nchar(20) NOT NULL,"
                                                       "sphost nchar(10) NOT NULL,"
                                                       "spprice INT,"
                                                       "spticket INT"
                                                       ");").arg(tableName);
                    bool ok1 = checkadmin.exec(createTableQuery);
                    if (ok1)
                        qDebug() << "创建总信息表成功";
                    else
                        qDebug() << "创建总信息表失败:" << checkadmin.lastError().text();

                    QSqlQuery insertdatabase(db);
                    QString insertQuery = QString("INSERT INTO %1 (id,sportstype, spname, sptime, spplace, sphost, spprice,spticket) "
                                                  "VALUES "
                                                  "( 1,'sport1','曼城VS曼联', '9月30日', '老特拉福德球场', '曼联', 200, 1000), "
                                                  "(2,'sport2','皇马VS巴萨', '9月29日', '伯纳乌球场', '皇马', 500, 1400 ), "
                                                  "(3,'sport3','上海海港VS成都蓉城', '9月29日', '上海浦东足球场', '上海海港', 100, 2100), "
                                                  "(4,'sport4','拜仁VS多特', '9月25日', '纳信号公园球场', '多特', 600, 500 ), "
                                                  "(5,'sport5','大巴黎VS摩纳哥', '9月24日', '王子公园球场', '大巴黎', 300, 1120  ), "
                                                  "(6,'sport6','国际米兰VS尤文图斯', '9月28日', '梅阿查体育场', '国际米兰', 230, 600)").arg(tableName);
                    bool ok2=insertdatabase.exec(insertQuery);
                    if (ok2)
                        qDebug() << "插入最初信息表成功";
                    else
                        qDebug() << "插入最初信息表失败:" << insertdatabase.lastError().text();

                }
                else {
                    qDebug() << "总信息表已经存在";
                }

            }
             db.close();
        }
        else
        {
            //判断是否存在
            QString dbName = "client.db";
            QFileInfo info(dbName);
            bool isExists = info.exists();

            QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
            db.setHostName(dbHostName); // 选择本地主机
            db.setDatabaseName(dbName); // 设置数据源名称
            db.setUserName(dbusername); // 登录用户
            db.setPassword(dbpassword); // 密码
            bool isOpen = db.open();

            if (isOpen) {
                QString tableName = userLogId; // 表名可以为变量
                QString balance=userLogId;
                // 规范化表名，确保以字母开头
                if (!tableName.isEmpty() && !tableName[0].isLetter()) {
                    tableName = "t_" + tableName; // 加个前缀
                }
                if (!balance.isEmpty() && !balance[0].isLetter()) {
                    balance = "m_" + balance; // 加个前缀
                }
                // 检查表是否存在
                QSqlQuery checkQuery(db);
                checkQuery.exec(QString("SELECT name FROM sqlite_master WHERE type='table' AND name='%1';").arg(tableName));
                QSqlQuery checkbalance(db);
                checkbalance.exec(QString("SELECT name FROM sqlite_master WHERE type='table' AND name='%1';").arg(balance));

                if (!checkQuery.next()) { // 如果没有找到表
                    // 使用变量动态构建 SQL 查询
                    QString createTableQuery = QString("CREATE TABLE \"%1\" ("
                                                       "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                                       "sportstype nchar(8) NOT NULL,"
                                                       "spname nchar(20) NOT NULL,"
                                                       "sptime nchar(8) NOT NULL,"
                                                       "spplace nchar(20) NOT NULL,"
                                                       "sphost nchar(10) NOT NULL,"
                                                       "spprice INT"
                                                       ");").arg(tableName);

                    bool ok1 = checkQuery.exec(createTableQuery);

                    if (ok1)
                        qDebug() << "创建订购信息表成功";
                    else
                        qDebug() << "创建订购信息表失败:" << checkQuery.lastError().text();
                }
                else {
                    qDebug() << "订购信息表已经存在";
                }

                if (!checkbalance.next()) { // 如果没有找到表
                    // 使用变量动态构建 SQL 查询
                    QString createTableBalance = QString("CREATE TABLE \"%1\" (balance INT);").arg(balance);

                    bool ok1 = checkbalance.exec(createTableBalance);

                    // 插入数据的表名也要使用变量
                    QString initbalance = QString("INSERT INTO \"%1\" (balance) "
                                                  "VALUES "
                                                  "(0);").arg(balance);
                    bool ok2 = checkbalance.exec(initbalance);

                    if (ok1&&ok2)
                        qDebug() << "创建余额表成功";
                    else
                        qDebug() << "创建余额表失败:" << checkbalance.lastError().text();
                }
                else {
                    qDebug() << "余额表已经存在";
                }
            }
            else {
                qDebug() << "数据库打开失败:" << db.lastError().text();
            }
            userPage * userscreen=new userPage;
            userscreen->show();
            connect(userscreen,&userPage::tologinPage,[=](){
                this->show();
                userscreen->hide();
            });
             db.close();
        }
    }
    else
    {
        QMessageBox::information(this,"提示","登陆失败,可能的原因:\n  1.账号错误\n  2.密码错误\n若忘记密码，请及时联系客服修改");
    }
}


void Login_page::on_clearBtn_clicked()
{
    ui->userBtn->setText("");
    ui->passwordBtn->setText("");
}


void Login_page::on_signupBtn_clicked()
{
    this->hide();
    SignUp *signup=new SignUp;
    signup->show();
    connect(signup,&SignUp::tologinPage,[=](){
        this->show();
        signup->hide();
    });
}

