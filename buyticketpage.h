#ifndef BUYTICKETPAGE_H
#define BUYTICKETPAGE_H
#include"global.h"
#include <QWidget>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QTableWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
namespace Ui {
class BuyTicketPage;
}

class BuyTicketPage : public QWidget
{
    Q_OBJECT

public:
    explicit BuyTicketPage(QWidget *parent = nullptr);
    ~BuyTicketPage();

private slots:
    void on_toUserPage_clicked();

    void on_xijia_clicked();

    void on_zhongchao_clicked();

    void on_yingchao_clicked();

    void on_dejia_clicked();

    void on_fajia_clicked();

    void on_yijia_clicked();

    void payticket_clicked();

signals:
    void toUserPage();

private:
    Ui::BuyTicketPage *ui;
    void populateTableWidget(); //数据库插入table
    QString nowsport;
};

#endif // BUYTICKETPAGE_H
