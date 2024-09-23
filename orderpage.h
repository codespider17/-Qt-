#ifndef ORDERPAGE_H
#define ORDERPAGE_H

#include <QWidget>
#include"global.h"
#include"buyticketpage.h"
namespace Ui {
class OrderPage;
}

class OrderPage : public QWidget
{
    Q_OBJECT

public:
    explicit OrderPage(QWidget *parent = nullptr);
    ~OrderPage();

private slots:
    void on_toUserPage_clicked();
    void on_backTicket_clicked();

signals:
    void toUserPage();
private:
    Ui::OrderPage *ui;
};

#endif // ORDERPAGE_H
