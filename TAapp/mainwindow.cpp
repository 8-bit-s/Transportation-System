#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSize>
#include <QPixmap>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //先析构不用的组件
    ui->backButton->hide();
    ui->accountButton->hide();
    ui->cityButton->hide();
    ui->tripButton->hide();

    ui->homeButton->setChecked(true);

    //因为刚进去就是home界面，先创建Home对象
    homewindow=new HomeWindow(this);
    homewindow->move(170,70);
    homewindow->show();


    //使图片自适应 Label 大小
    QPixmap *PixmapApp = new QPixmap(":/images/apppic.png");
    PixmapApp->scaled(ui->appPic->size(), Qt::KeepAspectRatio);
    ui->appPic->setScaledContents(true);
    ui->appPic->setPixmap(*PixmapApp);

}

MainWindow::~MainWindow()
{
    delete ui;
}


//右上用户按钮被点击的槽函数
void MainWindow::on_loginButton_clicked()
{
    //判断是否已登录，决定弹出Login或UserInfo窗口
    if(/*!is_login()*/true){
        LoginWindow *loginwindow=new LoginWindow;

        //将mainwindow的槽函数与loginwindow发出的登陆信号链接
        connect(loginwindow,&LoginWindow::adminLogin,this,&MainWindow::adminLogin);

        loginwindow->show();
    }
    else{
        AccountInfoWindow *accountinfowindow=new AccountInfoWindow(this);
        accountinfowindow->move(800,50);
        accountinfowindow->show();
    }

}


//对管理员成功登录的处理
void MainWindow::adminLogin(){
    //要显示管理员才有的选项，同时改变右上名字
    ui->accountButton->show();
    ui->cityButton->show();
    ui->tripButton->show();
    ui->loginButton->setText("管理员123456");

    //同时创建对应的子窗口
    tripmanagewindow=new TripManageWindow(this);
    tripmanagewindow->move(170,70);

    citymanagewindow=new CityManageWindow(this);
    citymanagewindow->move(170,70);

    accountmanagewindow=new AccountManageWindow(this);
    accountmanagewindow->move(170,70);
}


void MainWindow::on_homeButton_clicked()
{
    if(homewindow->isHidden()) {
        citymanagewindow->hide();
        tripmanagewindow->hide();
        accountmanagewindow->hide();
        homewindow->show();
    }

}


void MainWindow::on_tripButton_clicked()
{
    if(tripmanagewindow->isHidden()) {
        citymanagewindow->hide();
        homewindow->hide();
        accountmanagewindow->hide();
        tripmanagewindow->show();
    }
}


void MainWindow::on_cityButton_clicked()
{
    if(citymanagewindow->isHidden()) {
        tripmanagewindow->hide();
        homewindow->hide();
        accountmanagewindow->hide();
        citymanagewindow->show();
    }
}


void MainWindow::on_accountButton_clicked()
{
    if(accountmanagewindow->isHidden()) {
        tripmanagewindow->hide();
        homewindow->hide();
        citymanagewindow->hide();
        accountmanagewindow->show();
    }
}

