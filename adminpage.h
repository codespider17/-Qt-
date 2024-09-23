#ifndef ADMINPAGE_H
#define ADMINPAGE_H
#include"global.h"
#include"addsports.h"
#include <QWidget>
#include<QTableWidget>
namespace Ui {
class adminPage;
}

class adminPage : public QWidget
{
    Q_OBJECT

public:
    explicit adminPage(QWidget *parent = nullptr);
    ~adminPage();
    // QTableWidget *tableWidget; // 确保在这里声明

private slots:
    void on_tologinPage_clicked();

    void on_saleBtn_clicked();

    void on_refresh_clicked();

    void on_delBtn_clicked();

    void on_cfmModify_clicked();

signals:
    void tologinPage();
private:
    Ui::adminPage *ui;
};

#endif // ADMINPAGE_H
