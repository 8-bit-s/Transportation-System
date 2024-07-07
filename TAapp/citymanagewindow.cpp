#include "citymanagewindow.h"
#include "ui_citymanagewindow.h"

CityManageWindow::CityManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityManageWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

CityManageWindow::~CityManageWindow()
{
    delete ui;
}
