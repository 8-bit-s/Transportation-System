#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MapWindow)
{
    ui->setupUi(this);
}

MapWindow::~MapWindow()
{
    delete ui;
}
