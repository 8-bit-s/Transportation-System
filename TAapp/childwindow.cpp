#include "childwindow.h"
#include "ui_childwindow.h"

ChildWindow::ChildWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChildWindow)
{
    ui->setupUi(this);
}

ChildWindow::~ChildWindow()
{
    delete ui;
}

void ChildWindow::on_sureBtn_clicked()
{
    emit add(ui->targetEdit->text());
    this->close();
}
