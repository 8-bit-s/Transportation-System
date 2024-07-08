#include "tripunit.h"
#include "ui_tripunit.h"

TripUnit::TripUnit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripUnit)
{
    ui->setupUi(this);

    ui->city1->setText("");
    ui->city2->setText("");
    ui->name->setText("");
    ui->time->setText("");
    ui->cost->setText("");
    ui->distance->setText("");

}

TripUnit::~TripUnit()
{
    delete ui;
}

void TripUnit::setTotal(const int type,const std::string b,const std::string e,const std::string n,const std::string t,const std::string c,const std::string d)    //int的类型（0air1rail），string的类型：起点，终点，名称，时间，费用）
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

void TripUnit::setType(const int type){
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

void TripUnit::setBegin(const std::string b){
    ui->city1->setText(QString::fromStdString(b));
}

void TripUnit::setEnd(const std::string e){
    ui->city2->setText(QString::fromStdString(e));
}

void TripUnit::setName(const std::string n){
    ui->name->setText(QString::fromStdString(n));
}

void TripUnit::setTime(const std::string t){
    ui->time->setText(QString::fromStdString(t));
}

void TripUnit::setCost(const std::string c){
    ui->cost->setText(QString::fromStdString(c));
}

void TripUnit::setDistance(const std::string d){
    ui->distance->setText(QString::fromStdString(d));
}
