#include "login_page.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling,true);
    QApplication a(argc, argv);
    Login_page w;
    w.show();
    return a.exec();
}
