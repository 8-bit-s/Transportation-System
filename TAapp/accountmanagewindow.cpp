#include "accountmanagewindow.h"
#include "ui_accountmanagewindow.h"

AccountManageWindow::AccountManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AccountManageWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setAttribute(Qt::WA_StyledBackground);
    hide();
}

AccountManageWindow::~AccountManageWindow()
{
    delete ui;
}
