#ifndef USERPAGE_H
#define USERPAGE_H

#include <QWidget>
#include"buyticketpage.h"
#include"global.h"
#include"recharge.h"
#include"orderpage.h"
namespace Ui {
class userPage;
}

class userPage : public QWidget
{
    Q_OBJECT

public:
    explicit userPage(QWidget *parent = nullptr);
    ~userPage();

private slots:
    void on_tologinPage_clicked();

    void on_buyticket_clicked();

    void on_recharge_clicked();

    void on_ticketinfo_clicked();

    void on_balance_clicked();

signals:
    void tologinPage();
private:
    Ui::userPage *ui;
};

#endif // USERPAGE_H
