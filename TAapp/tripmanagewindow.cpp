#include "tripmanagewindow.h"
#include "ui_tripmanagewindow.h"

TripManageWindow::TripManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripManageWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    ui->WidgetSerch->move(36,8);

}

TripManageWindow::~TripManageWindow()
{
    delete ui;
}
