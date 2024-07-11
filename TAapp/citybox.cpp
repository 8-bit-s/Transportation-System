#include "citybox.h"
#include "ui_citybox.h"

CityBox::CityBox(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityBox)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    ui->cityBtn->setDisabled(true);
    connect(this,&CityBox::changeable,ui->cityBtn,[&](){
        ui->cityBtn->setEnabled(true);
        ui->cityBtn->setCheckable(true);
    });

}

CityBox::CityBox(QString city,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityBox)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);

    ui->cityBtn->setText(city);
    connect(this,&CityBox::changeable,ui->cityBtn,[&](){
        ui->cityBtn->setEnabled(true);
    });
}

CityBox::~CityBox()
{
    delete ui;
}

void CityBox::on_cityBtn_clicked()
{
    // 如果按钮被选中，则颜色为粉色
    if(ui->cityBtn->isChecked())
        ui->cityBtn->setStyleSheet("QPushButton{border-top-left-radius: 15px;/*圆角*/border-bottom-left-radius: 15px;  border-top-right-radius: 15px;  border-bottom-right-radius: 15px;  {background-color: rgb(255, 180, 200);}/* 鼠标悬停 */QPushButton:hover{background-color: rgba(0, 0, 0,20);}");
    else
        ui->cityBtn->setStyleSheet("QPushButton{border-top-left-radius: 15px;/*圆角*/border-bottom-left-radius: 15px;  border-top-right-radius: 15px;  border-bottom-right-radius: 15px;  background-color: rgba(128, 128, 128, 20);}/* 鼠标悬停 */QPushButton:hover{background-color: rgba(0, 0, 0,20);");

}
