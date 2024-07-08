#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSize>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //使图片自适应 Label 大小
    QPixmap *PixmapApp = new QPixmap(":/images/apppic.png");
    PixmapApp->scaled(ui->appPic->size(), Qt::KeepAspectRatio);
    ui->appPic->setScaledContents(true);
    ui->appPic->setPixmap(*PixmapApp);


    ui->WidgetBtn->move(15,650);
    connect(ui->ExitBtn,&QPushButton::clicked,this,&MainWindow::close);

    ui->WidgetSerch->move(225,100);

    // 按下管理员登陆选项后更换页面
    connect(ui->SignInBtn,&QPushButton::clicked,this,[&](){
        this->hide();//主界面关闭
        SignInWindow *newWindow = new SignInWindow(this);//新建子界面

        connect(newWindow,&SignInWindow::ReshowMainWindow,this,[&](){
            this->show();
        });
        newWindow->show();//子界面出现
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
