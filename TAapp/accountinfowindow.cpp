#include "accountinfowindow.h"
#include "ui_accountinfowindow.h"

AccountInfoWindow::AccountInfoWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AccountInfoWindow)
{
    ui->setupUi(this);

    //使其可成为子窗口
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

AccountInfoWindow::~AccountInfoWindow()
{
    delete ui;
}
