#include "tripmanagewindow.h"
#include "ui_tripmanagewindow.h"

#include"tag.h"
#include "tripunit.h"
#include "tripwindow.h"
#include "api.h"

#include<QMessageBox>


TripManageWindow::TripManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TripManageWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    setAttribute(Qt::WA_StyledBackground);


    type_tags = { -1 };
    //QMessageBox::information(NULL, "Title", "Content",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    trips=get_trip(begin_city_tags,end_city_tags,type_tags);

    trip_layout = new QGridLayout();
    trip_layout->setAlignment(Qt::AlignTop | Qt::AlignLeft);
    trip_layout->setVerticalSpacing(20);
    trip_layout->setHorizontalSpacing(20);
    update_triplist();
    hide();


    begin_select=new QPushButton(this);
    all_select=new QPushButton(this);
    delete_select=new QPushButton(this);
    cancel_select=new QPushButton(this);
    ui->select_layout->setAlignment(Qt::AlignLeft);
    ui->select_layout->addWidget(begin_select,0);
    ui->select_layout->addWidget(all_select,1);
    ui->select_layout->addWidget(delete_select,2);
    ui->select_layout->addWidget(cancel_select,0);

    connect(begin_select,&QPushButton::clicked,this,&TripManageWindow::beginSelect);
    connect(cancel_select,&QPushButton::clicked,this,&TripManageWindow::cancelSelect);
    connect(delete_select,&QPushButton::clicked,this,&TripManageWindow::deleteSelect);
    connect(all_select,&QPushButton::clicked,this,&TripManageWindow::allSelect);

    all_select->hide();
    delete_select->hide();
    cancel_select->hide();
    begin_select->setText("选择");
    all_select->setText("全选");
    delete_select->setText("删除");
    cancel_select->setText("取消选择");


    //使图片自适应 Label 大小
    QPixmap *PixmapApp = new QPixmap(":/images/arrow.png");
    PixmapApp->scaled(ui->arrow->size(), Qt::KeepAspectRatio);
    ui->arrow->setScaledContents(true);
    ui->arrow->setPixmap(*PixmapApp);



    //选项窗口全部隐藏
    hideWindows();

}

void TripManageWindow::beginSelect(){
    begin_select->hide();
    all_select->show();
    delete_select->show();
    cancel_select->show();
    is_selecting=true;
}

void TripManageWindow::cancelSelect(){
    for(auto i=tripunits.begin();i!=tripunits.end();i++){
        if((*i)->is_checked){
            (*i)->is_checked=false;
            (*i)->setStyleSheet("#tripUnit{background-color: rgb(250,240,230);"
                             "border-radius:15px;}"
                             "#tripUnit:hover{background-color: rgb(250,220,220);}");

        }
    }
    is_selecting=false;
    all_select->hide();
    delete_select->hide();
    cancel_select->hide();
    begin_select->show();
}

void TripManageWindow::allSelect(){
    for(auto i=tripunits.begin();i!=tripunits.end();i++){
        if(!(*i)->is_checked){
            (*i)->is_checked=true;
            (*i)->setStyleSheet("#tripUnit{background-color: rgb(240,200,200);"
                                "border-radius:15px;}");

        }
    }
}

void TripManageWindow::deleteSelect(){
    int delete_num=0;  //这是为了定位，因为删除元素会导致序号发生偏移
    for(auto i=tripunits.begin();i!=tripunits.end();i++){
        if((*i)->is_checked){
            delete_trip(trips[(*i)->index]);
            int k=(*i)->index-delete_num;
            trips.erase(trips.begin()+k);
            delete_num++;
        }
    }
    update_triplist();
}

TripManageWindow::~TripManageWindow()
{
    delete ui;
}

void TripManageWindow::hideWindows(){
    ui->city_widget->setVisible(false);
    ui->cost_widget->setVisible(false);
    ui->type_widget->setVisible(false);
    ui->time_widget->setVisible(false);
    ui->dis_widget->setVisible(false);
    ui->city_button->setChecked(false);
    ui->cost_button->setChecked(false);
    ui->type_button->setChecked(false);
    ui->time_button->setChecked(false);
    ui->dis_button->setChecked(false);
}



void TripManageWindow::update_triplist(){
    //删除旧组件
    QLayoutItem *item;
    while ((item = trip_layout->takeAt(0)) != nullptr)
    {
        if (QWidget *widget = item->widget())
        {
            delete widget;
        }
        if (QLayout *childLayout = item->layout())
            delete item;
    }
    tripunits.clear();

    int i=0;
    for(auto trip=trips.begin();trip!=trips.end();trip++,i++){
        tripUnit *trip_u=new tripUnit();
        trip_u->setTrip(*trip);
        trip_u->setIndex(i);
        int x=i%3;
        int y=(int)i/3;
        trip_layout->addWidget(trip_u,y,x,1,1);
        connect(trip_u,&tripUnit::clicked,this,&TripManageWindow::choose_trip);
        tripunits.push_back(trip_u);
    }
       ui->scrollArea->widget()->setLayout(trip_layout);
}

void TripManageWindow::choose_trip(tripUnit *t){
    if(is_selecting){
        if(t->is_checked){
            t->is_checked=false;
            t->setStyleSheet("#tripUnit{background-color: rgb(250,240,230);"
                             "border-radius:15px;}"
                             "#tripUnit:hover{background-color: rgb(250,220,220);}");

        }
        else{
            t->is_checked=true;
            t->setStyleSheet("#tripUnit{background-color: rgb(240,200,200);"
                             "border-radius:15px;}");
        }
    }
    else{
        tripwindow=new TripWindow(this);
        tripwindow->createWindow(t->index,trips[t->index]);
        connect(tripwindow,&TripWindow::modify_trip,this,&TripManageWindow::modify_trip);
        connect(tripwindow,&TripWindow::delete_trip,this,&TripManageWindow::deleteTrip);
        tripwindow->move(0,0);
        tripwindow->show();
        connect(this->back_button,&QPushButton::clicked,this,&TripManageWindow::tripwindow_goback);
        this->back_button->show();
    }
}

void TripManageWindow::tripwindow_goback(){
    tripwindow->close();
}

void TripManageWindow::modify_trip(int i,Trip trip){
    trips[i]=trip;
    update_trip(trip);
    update_triplist();
}

void TripManageWindow::deleteTrip(int i){
    delete_trip(trips[i]);
    trips.erase(trips.begin()+i);
    update_triplist();
}

//绘图槽函数

void TripManageWindow::draw_citytag(){
    qDeleteAll(ui->citytag_widget->children());
    auto c_s=begin_city_tags.begin();
    auto c_e=end_city_tags.begin();

    int index=0;        //记录身份的index
    int x=0,y=0;            //记录最后一个tag位置
    for(;c_s!=begin_city_tags.end() ; c_s++,c_e++,index++)
    {
        x+=5;
        Tag *tag = new Tag(ui->citytag_widget);
        std::string s="起始:"+*c_s+" "+"终点:"+*c_e;
        tag->setTag(s);
        tag->setIndex(index);

        //将标签右上删除按钮与实现函数链接
        connect(tag,&Tag::is_deleted,this,&TripManageWindow::delete_citytag);

        //对tag布局的处理
        if(x+tag->width()<ui->citytag_widget->width()-10){
            tag->move(x,y);
            x+=tag->width();
        }
        else{
            y+=40;
            x=5;
            tag->move(x,y);
            x+=tag->width();
            if(x>ui->citytag_widget->width()){
                ui->citytag_widget->resize(x+5,ui->citytag_widget->height());
            }
        }
        tag->show();
    }

    if(y+50>ui->citytag_widget->height()){
        ui->city_widget->resize(ui->city_widget->width()+40,ui->city_widget->height()+40);
        ui->citytag_widget->resize(ui->citytag_widget->width()+40,ui->citytag_widget->height()+40);
        draw_citytag();
    }
    else{
        return;
    }
}


void TripManageWindow::draw_costtag(){
    qDeleteAll(ui->costtag_widget->children());
    auto cost=cost_tags.begin();

    int index=0;        //记录身份的index
    int x=0,y=0;            //记录最后一个tag位置
    for(;cost!=cost_tags.end() ; cost++,index++)
    {
        x+=5;
        Tag *tag = new Tag(ui->costtag_widget);
        std::string s=*cost+"￥";
        tag->setTag(s);
        tag->setIndex(index);

        connect(tag,&Tag::is_deleted,this,&TripManageWindow::delete_costtag);

        //对tag布局的处理
        if(x+tag->width()<ui->costtag_widget->width()-10){
            tag->move(x,y);
            x+=tag->width();
        }
        else{
            y+=40;
            x=5;
            tag->move(x,y);
            x+=tag->width();
            if(x>ui->costtag_widget->width()){
                ui->costtag_widget->resize(x+5,ui->costtag_widget->height());
            }
        }
        tag->show();
    }

    if(y+50>ui->costtag_widget->height()){
        ui->cost_widget->resize(ui->cost_widget->width()+40,ui->cost_widget->height()+40);
        ui->costtag_widget->resize(ui->costtag_widget->width()+40,ui->costtag_widget->height()+40);
        draw_costtag();
    }

    else{
        return;
    }
}

void TripManageWindow::draw_timetag(){
    qDeleteAll(ui->timetag_widget->children());
    auto t=time_tags.begin();

    int index=0;        //记录身份的index
    int x=0,y=0;            //记录最后一个tag位置
    for(;t!=time_tags.end() ; t++,index++)
    {
        x+=5;
        Tag *tag = new Tag(ui->timetag_widget);
        tag->setTag(*t);
        tag->setIndex(index);

        //将标签右上删除按钮与实现函数链接
        connect(tag,&Tag::is_deleted,this,&TripManageWindow::delete_timetag);

        //对tag布局的处理
        if(x+tag->width()<ui->timetag_widget->width()-10){
            tag->move(x,y);
            x+=tag->width();
        }
        else{
            y+=40;
            x=5;
            tag->move(x,y);
            x+=tag->width();
            if(x>ui->timetag_widget->width()){
                ui->timetag_widget->resize(x+5,ui->timetag_widget->height());
            }
        }
        tag->show();
    }

    if(y+50>ui->timetag_widget->height()){
        ui->time_widget->resize(ui->time_widget->width()+40,ui->time_widget->height()+40);
        ui->timetag_widget->resize(ui->timetag_widget->width()+40,ui->timetag_widget->height()+40);
        draw_timetag();
    }
    else{
        return;
    }
}

void TripManageWindow::draw_distag(){
    qDeleteAll(ui->distag_widget->children());
    auto dis=dis_tags.begin();

    int index=0;        //记录身份的index
    int x=0,y=0;            //记录最后一个tag位置
    for(;dis!=dis_tags.end() ; dis++,index++)
    {
        x+=5;
        Tag *tag = new Tag(ui->distag_widget);
        std::string s=*dis+"km";
        tag->setTag(s);
        tag->setIndex(index);

        connect(tag,&Tag::is_deleted,this,&TripManageWindow::delete_distag);

        //对tag布局的处理
        if(x+tag->width()<ui->distag_widget->width()-10){
            tag->move(x,y);
            x+=tag->width();
        }
        else{
            y+=40;
            x=5;
            tag->move(x,y);
            x+=tag->width();
            if(x>ui->distag_widget->width()){
                ui->distag_widget->resize(x+5,ui->distag_widget->height());
            }
        }
        tag->show();
    }

    if(y+50>ui->distag_widget->height()){
        ui->dis_widget->resize(ui->dis_widget->width()+40,ui->dis_widget->height()+40);
        ui->distag_widget->resize(ui->distag_widget->width()+40,ui->distag_widget->height()+40);
        draw_costtag();
    }
    else{
        return;
    }
}

//添加tag按钮槽函数

void TripManageWindow::on_add_city_tag_clicked()
{
    begin_city_tags.push_back(ui->start_edit->text().toStdString());
    end_city_tags.push_back(ui->end_edit->text().toStdString());

    draw_citytag();
}

void TripManageWindow::on_add_cost_tag_clicked()
{
    std::string s=ui->cost_edit->text().toStdString();
    for(char c:s){
        if(!std::isdigit(c)){
            return;
        }
    }
    cost_tags.push_back(s);
    draw_costtag();
}

void TripManageWindow::on_add_time_tag_clicked()
{
    std::string h=ui->hour_edit->text().toStdString();
    std::string m=ui->min_edit->text().toStdString();
    //纯数字检验
    for(char c:h){
        if(!std::isdigit(c)){
            return;
        }
    }
    for(char c:m){
        if(!std::isdigit(c)){
            return;
        }
    }
    std::string t=h+"h"+m+"min";
    time_tags.push_back(t);
    draw_timetag();
}

void TripManageWindow::on_add_dis_tag_clicked()
{
    std::string s=ui->dis_edit->text().toStdString();
    for(char c:s){
        if(!std::isdigit(c)){
            return;
        }
    }
    dis_tags.push_back(s);
    draw_distag();
}



//筛选菜单槽函数

void TripManageWindow::on_city_button_clicked()
{
    if(ui->city_widget->isVisible()){
        ui->city_button->setChecked(false);
        ui->city_widget->setVisible(false);
        ui->city_button->update();
    }
    else{
        hideWindows();
        ui->city_button->setChecked(true);
        ui->city_button->update();
        ui->city_widget->setVisible(true);
    }
}

void TripManageWindow::on_cost_button_clicked()
{
    if(ui->cost_widget->isVisible()){
        ui->cost_button->setChecked(false);
        ui->cost_widget->setVisible(false);
        ui->cost_button->update();
    }
    else{
        hideWindows();
        ui->cost_button->setChecked(true);
        ui->cost_button->update();
        ui->cost_widget->setVisible(true);
    }
}

void TripManageWindow::on_type_button_clicked()
{
    if(ui->type_widget->isVisible()){
        ui->type_button->setChecked(false);
        ui->type_widget->setVisible(false);
        ui->type_button->update();
    }
    else{
        hideWindows();
        ui->type_button->setChecked(true);
        ui->type_button->update();
        ui->type_widget->setVisible(true);
    }
}

void TripManageWindow::on_time_button_clicked()
{
    if(ui->time_widget->isVisible()){
        ui->time_button->setChecked(false);
        ui->time_widget->setVisible(false);
        ui->time_button->update();
    }
    else{
        hideWindows();
        ui->time_button->setChecked(true);
        ui->time_button->update();
        ui->time_widget->setVisible(true);
    }
}

void TripManageWindow::on_dis_button_clicked()
{
    if(ui->dis_widget->isVisible()){
        ui->time_button->setChecked(false);
        ui->dis_widget->setVisible(false);
        ui->dis_button->update();
    }
    else{
        hideWindows();
        ui->dis_button->setChecked(true);
        ui->dis_button->update();
        ui->dis_widget->setVisible(true);
    }
}





//删除槽函数

void TripManageWindow::delete_citytag(int i){
    begin_city_tags.erase(begin_city_tags.begin() + i);
    end_city_tags.erase(end_city_tags.begin() + i);

    //将窗口还原重新排布
    if(ui->city_widget->width()>=360){
        ui->city_widget->resize(ui->city_widget->width()-40,ui->city_widget->height()-40);
        ui->citytag_widget->resize(ui->citytag_widget->width()-40,ui->citytag_widget->height()-40);
    }
    draw_citytag();
}

void TripManageWindow::delete_costtag(int i){
    cost_tags.erase(cost_tags.begin() + i);
    if(ui->cost_widget->width()>=280){
        ui->cost_widget->resize(ui->cost_widget->width()-40,ui->cost_widget->height()-40);
        ui->costtag_widget->resize(ui->costtag_widget->width()-40,ui->costtag_widget->height()-40);
    }
    draw_costtag();
}

void TripManageWindow::delete_timetag(int i){
    time_tags.erase(time_tags.begin() + i);
    if(ui->time_widget->width()>=340){
        ui->time_widget->resize(ui->time_widget->width()-40,ui->time_widget->height()-40);
        ui->timetag_widget->resize(ui->timetag_widget->width()-40,ui->timetag_widget->height()-40);
    }
    draw_timetag();
}

void TripManageWindow::delete_distag(int i){
    dis_tags.erase(dis_tags.begin() + i);
    if(ui->time_widget->width()>=280)
    ui->dis_widget->resize(ui->dis_widget->width()-40,ui->dis_widget->height()-40);
    ui->distag_widget->resize(ui->distag_widget->width()-40,ui->distag_widget->height()-40);
    draw_distag();
}

void TripManageWindow::on_add_button_clicked()
{
    addtripwindow=new AddTripWindow(this);
    addtripwindow->move(0,0);
    addtripwindow->show();
    connect(addtripwindow,&AddTripWindow::add_trip,this,&TripManageWindow::addTrip);
    connect(this->back_button,&QPushButton::clicked,this,&TripManageWindow::addwindow_goback);
}

void TripManageWindow::addwindow_goback(){
    addtripwindow->close();
}

void TripManageWindow::addTrip(Trip trip){
    new_trip(trip);
}


void TripManageWindow::on_search_button_clicked()
{
    type_tags.clear();
    if(ui->air_box->isChecked()) type_tags.push_back(0);
    if(ui->rail_box->isChecked()) type_tags.push_back(1);
    if(!ui->air_box->isChecked() && !ui->rail_box->isChecked()) type_tags.push_back(-1);
    trips.clear();
    trips=get_trip(begin_city_tags,end_city_tags,type_tags);
    update_triplist();
}

