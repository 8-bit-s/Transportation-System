#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    //这里判断是否身份合法
    //int usertype=usertype();

    switch(1){
    case -1:
        //非法登录情况
    case 0:
        emit userLogin();
        break;
    case 1:
        emit adminLogin();
    }

    this->close();
}

