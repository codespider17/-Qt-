#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include<global.h>
namespace Ui {
class SignUp;
}

class SignUp : public QWidget
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();
    void getInformation();
    bool setInformation();
private slots:
    void on_tologinPage_clicked();
    void on_submitBtn_clicked();

    void on_pushButton_clicked();

signals:
    void tologinPage();
private:
    Ui::SignUp *ui;
    QString userid;
    QString userpass;
    QString againpass;

};

#endif // SIGNUP_H
