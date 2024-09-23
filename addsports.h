#ifndef ADDSPORTS_H
#define ADDSPORTS_H

#include <QWidget>
#include"global.h"
namespace Ui {
class addSports;
}

class addSports : public QWidget
{
    Q_OBJECT

public:
    explicit addSports(QWidget *parent = nullptr);
    ~addSports();

private slots:

    void on_noBtn_clicked();

    void okBtn_clicked();

    void on_clearBtn_clicked();

signals:
    void toAdminPage();
private:
    Ui::addSports *ui;
};

#endif // ADDSPORTS_H
