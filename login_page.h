#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

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
#include"global.h"
#include"adminpage.h"
#include"userpage.h"
#include"signup.h"
#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui {
class Login_page;
}
QT_END_NAMESPACE

class Login_page : public QMainWindow
{
    Q_OBJECT

public:
    Login_page(QWidget *parent = nullptr);
    ~Login_page();

    void createdatebase();   //创建数据库
    bool checkpassword(bool flag_pos,QString getId,QString getPass);  //校验密码

private slots:
    void on_exitBtn_clicked();

    void on_loginBtn_clicked();

    void on_clearBtn_clicked();

    void on_signupBtn_clicked();
private:
    Ui::Login_page *ui;
};
#endif // LOGIN_PAGE_H
