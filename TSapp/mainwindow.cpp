#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSize>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //使图片自适应 Label 大小
    QPixmap *PixmapTrain = new QPixmap(":/train.png");
    PixmapTrain->scaled(ui->TrainLabel->size(), Qt::KeepAspectRatio);
    ui->TrainLabel->setScaledContents(true);
    ui->TrainLabel->setPixmap(*PixmapTrain);

    QPixmap *PixmapPlane = new QPixmap(":/plane.png");
    PixmapPlane->scaled(ui->PlaneLabel->size(), Qt::KeepAspectRatio);
    ui->PlaneLabel->setScaledContents(true);
    ui->PlaneLabel->setPixmap(*PixmapPlane);

    ui->WidgetBtn->move(1200,25);
    connect(ui->ExitBtn,&QPushButton::clicked,this,&MainWindow::close);



    // by zjb
    // 点击按钮弹出窗口
    //connect(,&QPushButton::click,)

    // 按下管理员登陆选项后更换页面
    connect(ui->SignInBtn,&MyPushButton::clicked,this,[&](){
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
