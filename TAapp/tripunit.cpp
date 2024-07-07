#include "tripunit.h"
#include "ui_tripunit.h"

tripUnit::tripUnit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tripUnit)
{
    ui->setupUi(this);

    ui->city1->setText("");
    ui->city2->setText("");
    ui->name->setText("");
    ui->time->setText("");
    ui->cost->setText("");
    ui->distance->setText("");

}

tripUnit::~tripUnit()
{
    delete ui;
}

void tripUnit::setTotal(const int type,const std::string b,const std::string e,const std::string n,const std::string t,const std::string c,const std::string d)    //int的类型（0air1rail），string的类型：起点，终点，名称，时间，费用）
{
    //改变类型对应的图标
    switch(type){
    case -1:{
        QPixmap typepic("");
        ui->typepic->setPixmap(typepic);
    }
    case 0:{
        QPixmap typepic(":/airtype.png");
        ui->typepic->setPixmap(typepic);
    }
    case 1:{
        QPixmap typepic(":/railtype.png");
        ui->typepic->setPixmap(typepic);
    }
    }

    //依次设置data
    ui->city1->setText(QString::fromStdString(b));
    ui->city2->setText(QString::fromStdString(e));
    ui->name->setText(QString::fromStdString(n));
    ui->time->setText(QString::fromStdString(t));
    ui->cost->setText(QString::fromStdString(b));
    ui->distance->setText(QString::fromStdString(d));
}

void tripUnit::setType(const int type){
    switch(type){
    case -1:{
        QPixmap typepic("");
        ui->typepic->setPixmap(typepic);
    }
    case 0:{
        QPixmap typepic(":/airtype.png");
        ui->typepic->setPixmap(typepic);
    }
    case 1:{
        QPixmap typepic(":/railtype.png");
        ui->typepic->setPixmap(typepic);
    }
    }
}

void tripUnit::setBegin(const std::string b){
    ui->city1->setText(QString::fromStdString(b));
}

void tripUnit::setEnd(const std::string e){
    ui->city2->setText(QString::fromStdString(e));
}

void tripUnit::setName(const std::string n){
    ui->name->setText(QString::fromStdString(n));
}

void tripUnit::setTime(const std::string t){
    ui->time->setText(QString::fromStdString(t));
}

void tripUnit::setCost(const std::string c){
    ui->cost->setText(QString::fromStdString(c));
}

void tripUnit::setDistance(const std::string d){
    ui->distance->setText(QString::fromStdString(d));
}
