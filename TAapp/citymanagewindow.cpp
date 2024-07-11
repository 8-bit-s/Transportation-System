#include "citymanagewindow.h"
#include "ui_citymanagewindow.h"
#include "ui_citybox.h"
#include "ui_searchwindow.h"
#include "ui_addwindow.h"
#include <QPixmap>
#include <QDebug>
#include <vector>

CityManageWindow::CityManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityManageWindow)
{
    ui->setupUi(this);
    vCity.resize(0);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    //使图片自适应 Label 大小
    QPixmap *PixmapApp1 = new QPixmap(":/images/change.png");
    PixmapApp1->scaled(ui->changePic->size(), Qt::KeepAspectRatio);
    ui->changePic->setScaledContents(true);
    ui->changePic->setPixmap(*PixmapApp1);

    QPixmap *PixmapApp2 = new QPixmap(":/images/search.png");
    PixmapApp2->scaled(ui->searchPic->size(), Qt::KeepAspectRatio);
    ui->searchPic->setScaledContents(true);
    ui->searchPic->setPixmap(*PixmapApp2);

    QPixmap *PixmapApp3 = new QPixmap(":/images/add.png");
    PixmapApp3->scaled(ui->addPic->size(), Qt::KeepAspectRatio);
    ui->addPic->setScaledContents(true);
    ui->addPic->setPixmap(*PixmapApp3);

    QPixmap *PixmapApp4 = new QPixmap(":/images/delete.png");
    PixmapApp4->scaled(ui->deletePic->size(), Qt::KeepAspectRatio);
    ui->deletePic->setScaledContents(true);
    ui->deletePic->setPixmap(*PixmapApp4);

    QPixmap *PixmapApp5 = new QPixmap(":/images/cancel.png");
    PixmapApp5->scaled(ui->cancelPic->size(), Qt::KeepAspectRatio);
    ui->cancelPic->setScaledContents(true);
    ui->cancelPic->setPixmap(*PixmapApp5);

    // 未操作时隐藏删除键和取消键
    ui->deleteBtn->hide();
    ui->backBtn->hide();
    ui->deletePic->hide();
    ui->cancelPic->hide();

    // 界面布置
    ui->searchBtn->move(70,50);
    ui->addBtn->move(190,50);
    ui->changeBtn->move(310,50);
    ui->deleteBtn->move(430,50);
    ui->backBtn->move(550,50);
    ui->searchPic->move(157,58);
    ui->addPic->move(277,58);
    ui->changePic->move(397,58);
    ui->deletePic->move(517,58);
    ui->cancelPic->move(637,58);

    Initial();

    connect(this,&CityManageWindow::SearchTarget,this,&CityManageWindow::Search);
    connect(this,&CityManageWindow::AddTarget,this,&CityManageWindow::addCityBox);
}

CityManageWindow::~CityManageWindow()
{
    delete ui;
    for(int i=0;i<vCity.size();i++)
    {
        delete vCity[i];
    }
}

// 显示当前页面城市信息 一次最多展示6个
void CityManageWindow::display(int n)
{
    int x=75,y=70,num,i=0;
    num=6*n;
    while(num<vCity.size()&&i<6)
    {
        x=75;y=70;
        num=i+6*n;
        if(num/3==1)
            y+=230;
        if(num%3==1)
            x+=260;
        else if(num%3==2)
            x+=520;
        (*vCity[num]).move(x,y);
        (*vCity[num]).show();
        i++;
    }
}

// 初始化城市列表
void CityManageWindow::Initial()
{
    for(int i=0;i<vCity.size();i++)
    {
        vCity[i]->hide();
    }
    //display();
}


// 从向量中删除一个元素
void CityManageWindow::eraseCityBox(int i) {
    if (i >= 0 && i < vCity.size()) {
        delete vCity[i];
        vCity.erase(vCity.begin() + i);
    }
}

// 添加一个新的 CityBox
void CityManageWindow::addCityBox(QString city) {
    CityBox c(city);
    CityBox* p=&c;
    vCity.push_back(p);
    display(vCity.size()/6);
}

// 点击编辑按钮后才会显示勾选框 供删改操作
void CityManageWindow::on_changeBtn_clicked()
{
    int i=0;
    int length=vCity.size()-1;

    ui->changeBtn->setStyleSheet("QPushButton{background-color: rgb(255, 180, 200);}");
    ui->changeBtn->setDisabled(true);

    ui->deleteBtn->show();
    ui->backBtn->show();
    ui->deletePic->show();
    ui->cancelPic->show();
    ui->deleteBtn->setAttribute(Qt::WA_TransparentForMouseEvents, true);

    for(;i<length;i++)
    {
        emit vCity[i]->changeable();
        ui->deleteBtn->setDisabled(true);// 在未勾选城市时删除键不可用
        connect(vCity[i]->ui->cityBtn,&QPushButton::clicked,this,[=](){

            ui->deleteBtn->setEnabled(true);
            ui->deleteBtn->setAttribute(Qt::WA_TransparentForMouseEvents, false);
            emit deleteable();
        });
    }
    i=0;
    connect(ui->deleteBtn,&QPushButton::clicked,this,[&](){
        for(;i<length;i++)
        {
            connect(this,&CityManageWindow::deleteable,this,[&](){
                eraseCityBox(i);
                i--;
                length--;
            });
        }
    });

}

// 按下取消按钮恢复原状
void CityManageWindow::on_backBtn_clicked()
{
    ui->changeBtn->setEnabled(true);
    ui->changeBtn->setStyleSheet("QPushButton{border-bottom-right-radius: 15px;  border-bottom-left-radius: 2px;  border-top-right-radius: 15px;  border-top-left-radius: 2px;  background-color: rgba(128, 128, 128, 20);}QPushButton:hover{background-color: rgba(0, 0, 0,20);}QPushButton:pressed,QToolButton:checked{background-color: rgb(255, 180, 200);}");
    ui->backBtn->hide();
    ui->deleteBtn->hide();
    ui->deletePic->hide();
    ui->cancelPic->hide();
    for(int i=0;i<vCity.size();i++)
    {
        vCity[i]->ui->cityBtn->setDisabled(true);
    }
}

// 点击查询键弹出小窗
void CityManageWindow::on_searchBtn_clicked()
{
    SearchWindow *searchwindow=new SearchWindow;

    connect(searchwindow->ui->searchBtn,&QPushButton::clicked,this,[=](){
        emit SearchTarget(searchwindow->ui->targetEdit->text());
        searchwindow->close();
    });
    searchwindow->show();
}

// 查询功能
void CityManageWindow::Search(QString city)
{
    for(int i=0;i<vCity.size();i++)
    {
        if(city!=vCity[i]->ui->cityBtn->text())
            vCity[i]->hide();
    }
    return;
}

// 点击增加弹出小窗
void CityManageWindow::on_addBtn_clicked()
{
    AddWindow *addwindow=new AddWindow;

    connect(addwindow,&AddWindow::add,this,&CityManageWindow::AddTarget);
    addwindow->show();
}
