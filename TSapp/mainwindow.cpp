#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSize>
#include <QPixmap>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}
