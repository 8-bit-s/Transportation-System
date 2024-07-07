#include "homewindow.h"
#include "ui_homewindow.h"

HomeWindow::HomeWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HomeWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
}

HomeWindow::~HomeWindow()
{
    delete ui;
}
