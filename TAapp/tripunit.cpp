#include "tripunit.h"
#include "ui_tripunit.h"

#include <QLayout>

tripUnit::tripUnit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tripUnit)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground);

    typepicLabel=new QLabel(this);
    QPixmap pixmap1(":/images/airtype.png");


    arrowpic=new QLabel(this);
    QPixmap pixmap2(":/images/long_arrow.png");
    arrowpic->setPixmap(pixmap2);
    arrowpic->setScaledContents(true);

    QFont font("SimHei",12);

    city1 = new QLabel(this);
    city1->setText("city1");
    city1->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    city1->setFont(font);

    city2 = new QLabel(this);
    city2->setText("city2");
    city2->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    city2->setFont(font);

    cost = new QLabel(this);
    cost->setText("cost");
    cost->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    cost->setFont(font);

    distance = new QLabel(this);
    distance->setText("distance");
    distance->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    distance->setFont(font);

    time = new QLabel(this);
    time->setText("time");
    time->setAlignment(Qt::AlignCenter | Qt::AlignVCenter);
    time->setFont(font);

    QGridLayout *pGridLay = new QGridLayout(this);
    pGridLay->addWidget(typepicLabel,0,0,3,1);
    pGridLay->addWidget(arrowpic,0,2,3,2);
    pGridLay->addWidget(city1,1,1,1,1,Qt::AlignRight);
    pGridLay->addWidget(city2,1,4,1,1,Qt::AlignLeft);
    pGridLay->addWidget(cost, 1,5,1,1);
    pGridLay->addWidget(distance, 2,2,1,2);
    pGridLay->addWidget(time,0,2,1,2);

}


tripUnit::~tripUnit()
{
    delete ui;
}

//修改显示内容的函数，传入Trip

void tripUnit::setTrip(Trip &trip)
{
    switch(trip.type){
    case AIR:{
        QPixmap typepic(":/images/airtype.png");
        typepicLabel->setPixmap(typepic);
        typepicLabel->setFixedSize(40,40);
        typepicLabel->setPixmap(typepic);
        typepicLabel->setScaledContents(true);
        break;
    }
    case RAIL:{
        QPixmap typepic(":/images/railtype.png");
        typepicLabel->setPixmap(typepic);
        typepicLabel->setFixedSize(40,40);
        typepicLabel->setPixmap(typepic);
        typepicLabel->setScaledContents(true);
        break;
    }
    }

    city1->setText(QString::fromStdString(trip.stfCity.name));
    city2->setText(QString::fromStdString(trip.arvCity.name));
    time->setText(QString::fromStdString(trip.time.str()));
    cost->setText(QString::fromStdString(std::to_string(trip.cost)));
    distance->setText(QString::fromStdString(std::to_string(trip.dist)));
}


