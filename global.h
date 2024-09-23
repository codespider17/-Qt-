#ifndef GLOBAL_H
#define GLOBAL_H
#include <QString>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
#include <QWidget>
#include<QMessageBox>
#include <QMainWindow>
#include <QPainter>
#include<QDebug>

extern QString removeSpace(QString str);
extern QString dbusername;
extern QString dbpassword;
extern QString dbHostName;
extern QString userLogId;
extern bool isProperId(QString str);
extern bool isProperPassword(QString str);

#endif // GLOBAL_H
