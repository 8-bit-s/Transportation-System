#include "tripwindow.h"
#include "ui_tripwindow.h"
#include "api.h"
#include<QMessageBox>
#include <QComboBox>

TripWindow::TripWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripWindow)
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
        "font-size: 20px;text-align:center;font-family:SimHei;}");



    typeLay = new QGridLayout;
    checkboxGroup = new QButtonGroup; // 创建按钮组用于单选
    checkbox1 = new QCheckBox("航班");
    checkbox2 = new QCheckBox("铁路");
    checkboxGroup->addButton(checkbox1,Qt::AlignCenter | Qt::AlignVCenter);
    checkboxGroup->addButton(checkbox2,Qt::AlignCenter | Qt::AlignVCenter);
    checkboxGroup->setExclusive(true); // 设置为单选模式
    typeLay->addWidget(checkbox1, 0, 0);
    typeLay->addWidget(checkbox2, 0, 1);


    start_text=new QLabel(this);
    start_label=new QLabel(this);
    end_text=new QLabel(this);
    end_label=new QLabel(this);
    time_text=new QLabel(this);
    time_label=new QLabel(this);
    cost_text=new QLabel(this);
    cost_label=new QLabel(this);
    dis_text=new QLabel(this);
    dis_label=new QLabel(this);
    type_text=new QLabel(this);
    type_label=new QLabel(this);
    modify_button = new QPushButton(this);
    delete_button = new QPushButton(this);
    pGridLay = new QGridLayout(ui->widget);

    pGridLay->addLayout(typeLay,0,0,1,2);
    pGridLay->addWidget(type_label,0,0,1,1);
    pGridLay->addWidget(type_text,0,1,1,1);
    pGridLay->addWidget(start_label,1,0,1,1);
    pGridLay->addWidget(start_text,1,1,1,1);
    pGridLay->addWidget(end_label,2,0,1,1);
    pGridLay->addWidget(end_text,2,1,1,1);
    pGridLay->addWidget(time_label,3,0,1,1);
    pGridLay->addWidget(time_text,3,1,1,1);
    pGridLay->addWidget(cost_label,4,0,1,1);
    pGridLay->addWidget(cost_text,4,1,1,1);
    pGridLay->addWidget(dis_label,5,0,1,1);
    pGridLay->addWidget(dis_text,5,1,1,1);
    pGridLay->addWidget(modify_button,6,0,1,1,Qt::AlignCenter | Qt::AlignVCenter);
    pGridLay->addWidget(delete_button,6,1,1,1,Qt::AlignCenter | Qt::AlignVCenter);


    pGridLay->setHorizontalSpacing(10);
    pGridLay->setVerticalSpacing(10);
    pGridLay->setContentsMargins(30,50,30,30);

    connect(modify_button,&QPushButton::clicked,this,&TripWindow::begin_modify);
    connect(delete_button,&QPushButton::clicked,this,&TripWindow::delete_cliched);

    ensure_button = new QPushButton(this);
    ensure_button->setText("确认修改");
    ensure_button->setFixedSize(150, 40);

    start_box = new QComboBox();
    end_box = new QComboBox();
    hour_edit=new QLineEdit(this);
    min_edit=new QLineEdit(this);
    cost_edit=new QLineEdit(this);
    dis_edit=new QLineEdit(this);



   // start_box->setFixedHeight(20);

    show_read();
    hide_write();
}

void TripWindow::hide_read(){
    start_text->hide();
    end_text->hide();
    time_text->hide();
    cost_text->hide();
    dis_text->hide();
    delete_button->hide();
    modify_button->hide();
    type_text->hide();
    type_label->hide();

}

void TripWindow::show_read(){
    start_text->show();
    end_text->show();
    time_text->show();
    cost_text->show();
    dis_text->show();
    delete_button->show();
    modify_button->show();
    type_text->show();
    type_label->show();

}

void TripWindow::hide_write(){
    start_box->hide();
    end_box->hide();
    hour_edit->hide();
    min_edit->hide();
    cost_edit->hide();
    dis_edit->hide();
    ensure_button->hide();
    checkbox2->hide();
    checkbox1->hide();
}

void TripWindow::show_write(){
    start_box->show();
    end_box->show();
    hour_edit->show();
    min_edit->show();
    cost_edit->show();
    dis_edit->show();
    ensure_button->show();
    checkbox1->show();
    checkbox2->show();

}

void TripWindow::begin_modify(){

    hide_read();
    show_write();

    std::vector<City> start_citys = get_city();

    for(auto i=start_citys.begin();i!=start_citys.end();i++){
        start_box->addItem(QString::fromStdString(i->name));
    }


    end_box->setFixedHeight(20);

    std::vector<City> end_citys = get_city();


    for(auto i=end_citys.begin();i!=end_citys.end();i++){
        end_box->addItem(QString::fromStdString(i->name));
    }


    hour_edit->setPlaceholderText(QString::number(trip.time.getHour()));
    min_edit->setPlaceholderText(QString::number(trip.time.getMinute()));

    cost_edit->setPlaceholderText(QString::number(trip.cost));

    dis_edit->setPlaceholderText(QString::number(trip.dist));

    pGridLay->addWidget(start_box,1,1,1,2);
    pGridLay->addWidget(end_box,2,1,1,2);
    pGridLay->addWidget(hour_edit,3,1,1,1);
    pGridLay->addWidget(min_edit,3,2,1,1);
    pGridLay->addWidget(cost_edit,4,1,1,2);
    pGridLay->addWidget(dis_edit,5,1,1,2);
    pGridLay->addWidget(ensure_button,6,1,1,1,Qt::AlignCenter | Qt::AlignVCenter);

    pGridLay->setVerticalSpacing(50);

    connect(ensure_button,&QPushButton::clicked,this,&TripWindow::ensure_clicked);
}

void TripWindow::ensure_clicked(){
    if(checkbox1->isChecked()){
        trip.type=AIR;
    }
    else{
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
    emit modify_trip(index,trip);
    updateWindow();
    show_read();
    hide_write();
}

void TripWindow::delete_cliched(){
    emit delete_trip(index);
    this->close();
};

void TripWindow::createWindow(int i,Trip trip){
    this->trip=trip;
    this->index=i;
    updateWindow();
}


void TripWindow::updateWindow(){



    start_text->setText(QString::fromStdString(trip.stfCity.name));
    start_label->setText("起始城市");

    end_text->setText(QString::fromStdString(trip.arvCity.name));
    end_label->setText("终点城市");

    time_text->setText(QString::fromStdString(trip.time.str()));
    time_label->setText("花费时间");

    cost_text->setText(QString::number(trip.cost));
    cost_label->setText("花费");

    dis_text->setText(QString::number(trip.dist));
    dis_label->setText("路程");


    if(trip.type==AIR){
        type_text->setText("航空");
    }
    else{
        type_text->setText("铁路");
    }
    type_label->setText("类型");


    modify_button->setText("修改");
    modify_button->setFixedSize(100, 40);

    delete_button->setText("删除");
    delete_button->setFixedSize(100, 40);



}
TripWindow::~TripWindow()
{
    delete ui;
}
