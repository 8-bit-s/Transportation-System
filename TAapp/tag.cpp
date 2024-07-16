#include "tag.h"
#include "ui_tag.h"

Tag::Tag(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Tag)
{
    ui->setupUi(this);
    index=-1;
}

Tag::~Tag()
{
    delete ui;
}

void Tag::setTag(std::string s){
    ui->label->setText(QString::fromStdString(s));

    //自适应大小
    ui->label->adjustSize();

    //根据lable的大小调整其他组件的大小
    int x=ui->label->width();
    ui->label->resize(x+10,30);
    this->resize(x+20,40);
    ui->deleteButton->move(x,0);
}

void Tag::setSize(int x,int y){
    this->resize(x,y);
    ui->deleteButton->move(x-20,0);
    ui->label->resize(x-10,y-10);
}




void Tag::on_deleteButton_clicked()
{
    //原本是button发出的信号，通过此步上升到由Tag发出，方便实现槽函数
    emit is_deleted(index);
}

