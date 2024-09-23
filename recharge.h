#ifndef RECHARGE_H
#define RECHARGE_H
#include<QMessageBox>
#include <QWidget>
#include <QPushButton>
#include <QPixmap>
#include"global.h"
namespace Ui {
class ReCharge;
}

class ReCharge : public QWidget
{
    Q_OBJECT

public:
    explicit ReCharge(QWidget *parent = nullptr);
    ~ReCharge();
    // void setImage(const QString &imagePath,const QSize &fixedSize);
private slots:
    void on_toLoginPage_clicked();
    void on_confirmBtn_clicked();

signals:
    void toUserpage();
private:
    Ui::ReCharge *ui;
};

#endif // RECHARGE_H
