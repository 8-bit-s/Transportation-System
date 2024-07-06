#include "signinwindow.h"
#include "ui_signinwindow.h"
#include <QPushButton>

SignInWindow::SignInWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignInWindow)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose,1);
    setFixedSize(1440,900);
    connect(ui->BackBtn,&QPushButton::clicked,this,&SignInWindow::CloseSignInWindow);

}

SignInWindow::~SignInWindow()
{
    delete ui;
}

void SignInWindow::CloseSignInWindow()
{
    emit ReshowMainWindow();
    this->close();
}
