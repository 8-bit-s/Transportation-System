#include "addtripwindow.h"
#include "ui_addtripwindow.h"
#include"api.h"

#include <QComboBox>

AddTripWindow::AddTripWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddTripWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setAttribute(Qt::WA_StyledBackground);

    ui->widget->setStyleSheet(
        "#widget{background-color:rgba(0,0,0,10);"
        "border-radius: 20px;}"
        "QCheckBox {"
        "border: 0px solid #FFFFFF; "
        "background-color:rgba(0,0,0,0);"
        "border-radius: 20px; "
        "padding: 4px; "
        "spacing: 15px; } "
        "QCheckBox::indicator{"
        "border: 0px solid #FFFFFF;  "
        "width: 20px;"
        "height: 20px;"
        "image: url(:/images/unchecked.png);}"
        "QCheckBox::indicator:hover {"
        "image: url(:/images/half_checked.png);}"
        "QCheckBox::indicator:checked {"
        "image: url(:/images/checked.png);}"
        "QPushButton {"
        "    background-color: rgb(240,240,240);"
        "    border-radius: 5px;"
        "}"
        "QPushButton:hover {"
        "background-color:rgb(240,220,220);}"
        "QLabel{"
        "background-color: rgba(0,0,0,0);"
        "font-size: 25px;text-align:center;font-family:SimHei;}");



    typeLay = new QGridLayout;
    checkboxGroup = new QButtonGroup; // 创建按钮组用于单选
    checkbox1 = new QCheckBox("航班");
    checkbox2 = new QCheckBox("铁路");
    checkboxGroup->addButton(checkbox1,Qt::AlignCenter | Qt::AlignVCenter);
    checkboxGroup->addButton(checkbox2,Qt::AlignCenter | Qt::AlignVCenter);
    checkboxGroup->setExclusive(true); // 设置为单选模式
    typeLay->addWidget(checkbox1, 0, 0);
    typeLay->addWidget(checkbox2, 0, 1);

    start_label=new QLabel(this);
    end_label=new QLabel(this);
    time_label=new QLabel(this);
    cost_label=new QLabel(this);
    dis_label=new QLabel(this);
    pGridLay = new QGridLayout(ui->widget);

    pGridLay->addLayout(typeLay,0,0,1,3);
    pGridLay->addWidget(start_label,1,0,1,1);
    pGridLay->addWidget(end_label,2,0,1,1);
    pGridLay->addWidget(time_label,3,0,1,1);
    pGridLay->addWidget(cost_label,4,0,1,1);
    pGridLay->addWidget(dis_label,5,0,1,1);

    pGridLay->setVerticalSpacing(60);
    pGridLay->setContentsMargins(30,50,30,30);

    ensure_button = new QPushButton(this);
    ensure_button->setText("确认");
    ensure_button->setFixedSize(150, 40);

    start_box = new QComboBox();
    end_box = new QComboBox();

    //填充combobox
    std::vector<City> start_citys = get_city();
    for(auto i=start_citys.begin();i!=start_citys.end();i++){
        start_box->addItem(QString::fromStdString(i->name));
    }
    start_box->setFixedHeight(30);
    std::vector<City> end_citys = get_city();

    for(auto i=end_citys.begin();i!=end_citys.end();i++){
        end_box->addItem(QString::fromStdString(i->name));
    }
    end_box->setFixedHeight(30);

    hour_edit=new QLineEdit(this);
    min_edit=new QLineEdit(this);
    cost_edit=new QLineEdit(this);
    dis_edit=new QLineEdit(this);

    start_label->setText("起始城市");
    end_label->setText("终点城市");
    time_label->setText("花费时间");
    cost_label->setText("花费");
    dis_label->setText("路程");

    pGridLay->addWidget(start_box,1,1,1,2);
    pGridLay->addWidget(end_box,2,1,1,2);
    pGridLay->addWidget(hour_edit,3,1,1,1);
    pGridLay->addWidget(min_edit,3,2,1,1);
    pGridLay->addWidget(cost_edit,4,1,1,2);
    pGridLay->addWidget(dis_edit,5,1,1,2);
    pGridLay->addWidget(ensure_button,6,0,1,3,Qt::AlignCenter | Qt::AlignVCenter);

    connect(ensure_button,&QPushButton::clicked,this,&AddTripWindow::ensure_clicked);

}

void AddTripWindow::ensure_clicked(){
    Trip trip;
    if(checkbox1->isChecked()){
        trip.type=AIR;
    }
    else if(checkbox2->isChecked()){
        trip.type=RAIL;
    }

    std::vector<City> start_citys = get_city();
    trip.stfCity=start_citys[start_box->currentIndex()];
    std::vector<City> end_citys = get_city();
    trip.arvCity=end_citys[end_box->currentIndex()];

    int h=hour_edit->text().toInt();
    int m=min_edit->text().toInt();
    Time t=Time(h,m);
    trip.time=t;
    trip.cost=cost_edit->text().toInt();
    trip.dist=dis_edit->text().toInt();
    emit add_trip(trip);
    this->close();
}

AddTripWindow::~AddTripWindow()
{
    delete ui;
}
