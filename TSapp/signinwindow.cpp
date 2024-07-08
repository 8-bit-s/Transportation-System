#include "signinwindow.h"
#include "ui_signinwindow.h"
#include <QPushButton>

SignInWindow::SignInWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignInWindow)
{
    ui->setupUi(this);

    QPixmap *PixmapApp = new QPixmap(":/images/apppic.png");
    PixmapApp->scaled(ui->appPic->size(), Qt::KeepAspectRatio);
    ui->appPic->setScaledContents(true);
    ui->appPic->setPixmap(*PixmapApp);

    ui->WidgetKey->move(400,300);
    ui->WidgetBtn->move(670,400);

    this->setAttribute(Qt::WA_DeleteOnClose,1);
    setFixedSize(1440,900);
    // 返回按钮
    connect(ui->BackBtn,&QPushButton::clicked,this,&SignInWindow::CloseSignInWindow);
    // 登陆按钮
    connect(ui->SignInBtn,&QPushButton::clicked,this,[&](){

        this->CloseSignInWindow();
    });

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
