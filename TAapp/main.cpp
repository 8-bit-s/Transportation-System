#include "mainwindow.h"
#include "httplib.h"

#include <QApplication>
httplib::Client client("192.168.21.208:3000");

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
