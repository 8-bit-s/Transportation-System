#include "citymanagewindow.h"
#include "ui_citymanagewindow.h"
#include "ui_childwindow.h"
#include "api.h"
#include "TripTable.h"
#include <QPixmap>
#include <QString>
#include <QIcon>
#include <QDebug>

const int BtnW=120;// 按键宽
const int BtnY=50;// 按键y坐标
const int PicY=58;// 图标y坐标

CityManageWindow::CityManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityManageWindow)
    , page(0)
{
    ui->setupUi(this);
    hide();

    BtnGroup=new QButtonGroup(this);     //使得城市可以多选
    BtnGroup->setExclusive(false);

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

    QPixmap *PixmapApp6 = new QPixmap(":/images/edit.png");
    PixmapApp6->scaled(ui->editPic->size(), Qt::KeepAspectRatio);
    ui->editPic->setScaledContents(true);
    ui->editPic->setPixmap(*PixmapApp6);

    ui->tipWidget->hide();
    ui->closeBtn->setIcon(QIcon(":/images/close.png"));


    // 未操作时隐藏删除键、修改键和取消键
    ui->deleteBtn->hide();
    ui->editBtn->hide();
    ui->backBtn->hide();
    ui->deletePic->hide();
    ui->editPic->hide();
    ui->cancelPic->hide();
    ui->backtoBtn->hide();

    // 界面布置
    ui->searchBtn->move(70,BtnY);
    ui->addBtn->move(70+BtnW,BtnY);
    ui->changeBtn->move(70+2*BtnW,BtnY);
    ui->deleteBtn->move(70+3*BtnW,BtnY);
    ui->editBtn->move(70+4*BtnW,BtnY);
    ui->backBtn->move(70+5*BtnW,BtnY);
    ui->searchPic->move(157,PicY);
    ui->addPic->move(157+BtnW,PicY);
    ui->changePic->move(157+2*BtnW,PicY);
    ui->deletePic->move(157+3*BtnW,PicY);
    ui->editPic->move(157+4*BtnW,PicY);
    ui->cancelPic->move(157+5*BtnW,PicY);

    Initial();

    connect(this,&CityManageWindow::SearchTarget,this,&CityManageWindow::Search);
    connect(this,&CityManageWindow::AddTarget,this,&CityManageWindow::addCityBox);
}

CityManageWindow::~CityManageWindow()
{
    delete ui;
}

void CityManageWindow::on_closeBtn_clicked()
{
    ui->tipWidget->hide();
}

// 显示当前页面城市信息 一次最多展示6个
void CityManageWindow::display(int n,int x,int y)
{
    int num,i=0,j=0;
    num=6*n;
    while(num<BtnGroup->buttons().count()&&j<BtnGroup->buttons().count())
    {
        if(j>=num&&i<6)
        {
            x=75;y=121;
            num=i+6*n;
            if(num>=BtnGroup->buttons().count())
                break;
            if(num/3==1)
                y+=240;
            if(num%3==1)
                x+=285;
            else if(num%3==2)
                x+=570;
            BtnGroup->button(num)->move(x,y);
            BtnGroup->button(num)->show();
            i++;
        }
        else
            BtnGroup->button(j)->hide();
        j++;
    }
    page=n;
    changePage();
}

// 只展示目标城市
void CityManageWindow::displayTarget(int n,int x,int y)
{
    BtnGroup->button(n)->move(x,y);
    BtnGroup->button(n)->show();
}

// 初始化城市列表
void CityManageWindow::Initial()
{
    // 与后端接口
    std::vector<City> citys = get_city();
    for(auto i=citys.begin();i!=citys.end();i++){
        initial_list(QString::fromStdString((*i).name));
    }
    display();
    changePage();
}


void CityManageWindow::initial_list(QString city) {
    QPushButton* p = new QPushButton(city, this);
    p->setCheckable(true);
    p->setFixedSize(240, 200);
    p->setStyleSheet("QPushButton{"
        "border-top-left-radius: 15px;/*圆角*/"
        "border-bottom-left-radius: 15px;  "
        "border-top-right-radius: 15px;"
        "border-bottom-right-radius: 15px;  "
        "background-color: rgba(128, 128, 128, 20);}"
        "/* 鼠标悬停 */"
        "QPushButton:hover{"
        "background-color: rgba(0, 0, 0,20);}"
        "QPushButton:checked{"
        "background-color: rgb(255, 180, 200);"
        "}");
    p->setFont(QFont(".AppleSystemUIFont", 36, QFont::Bold));
    p->setDisabled(true); // 此时不可按

    BtnGroup->addButton(p, BtnGroup->buttons().count());

    connect(p, &QPushButton::toggled, this, &CityManageWindow::updateCheckedButtons);
    int n = (BtnGroup->buttons().count() - 1) / 6;
    display(n);
    page = n;
    changePage();
}



// 添加一个新的 City
void CityManageWindow::addCityBox(QString city) {
    // 检查是否已经存在
    for (QAbstractButton *button : BtnGroup->buttons())
    {
        if(button->text()==city)
        {
            ui->tipWidget->show();

            return; // 若存在则不重复添加
        }
    }
    QPushButton* p=new QPushButton(city,this);
    p->setCheckable(true);
    p->setFixedSize(240,200);
    p->setStyleSheet("QPushButton{"
                     "border-top-left-radius: 15px;/*圆角*/"
                     "border-bottom-left-radius: 15px;  "
                     "border-top-right-radius: 15px;"
                     "border-bottom-right-radius: 15px;  "
                     "background-color: rgba(128, 128, 128, 20);}"
                     "/* 鼠标悬停 */"
                     "QPushButton:hover{"
                     "background-color: rgba(0, 0, 0,20);}"
                     "QPushButton:checked{"
                     "background-color: rgb(255, 180, 200);"
                     "}");
    p->setFont(QFont(".AppleSystemUIFont",36,QFont::Bold));
    p->setDisabled(true); // 此时不可按

    BtnGroup->addButton(p,BtnGroup->buttons().count());

    connect(p,&QPushButton::toggled,this,&CityManageWindow::updateCheckedButtons);
    int n=(BtnGroup->buttons().count()-1)/6;
    display(n);
    page=n;
    changePage();

    // 与后段的接口
    City c(p->text().toStdString(),0);
    new_city(c);
}

// 点击编辑按钮后才能选中城市 供删改操作
void CityManageWindow::on_changeBtn_clicked()
{
    ui->changeBtn->setStyleSheet("QPushButton{"
                                 "background-color: rgb(255, 180, 200);"
                                 "}");
    ui->changeBtn->setDisabled(true);

    ui->deleteBtn->show();
    ui->editBtn->show();
    ui->backBtn->show();
    ui->deletePic->show();
    ui->editPic->show();
    ui->cancelPic->show();
    ui->deleteBtn->setDisabled(true);// 在未勾选城市时删除键不可用
    ui->editBtn->setDisabled(true);
    ui->addBtn->setDisabled(true);
    ui->searchBtn->setDisabled(true);

    // 城市按钮解封
    for(int i=0;i<BtnGroup->buttons().count();i++)
    {
        BtnGroup->button(i)->setEnabled(true);
    }
}

// 按下删除键删除
void CityManageWindow::on_deleteBtn_clicked()
{
    for (QAbstractButton *button : checkedButtons) {
        // 与后段接口
         City c(button->text().toStdString(),0);
         delete_city(c);

        BtnGroup->removeButton(button);
        delete button;
    }

    // 更新id
    int i=0;
    for (QAbstractButton *button : BtnGroup->buttons())
    {
        BtnGroup->setId(button,i);
        i++;
    }

    checkedButtons.clear();
    ui->deleteBtn->setEnabled(false);
    ui->editBtn->setEnabled(false);
    if(ui->backtoBtn->isVisible())
    {
        backtoBtnVisibleChange();
    }
    else
    {
        ui->backBtn->click();
        display();// 返回首页
    }
}

// 返回键可见时的按键恢复（只对操作键进行调整）
void CityManageWindow::backtoBtnVisibleChange()
{
    ui->changeBtn->setEnabled(true);
    ui->addBtn->setEnabled(true);
    ui->searchBtn->setEnabled(true);
    ui->changeBtn->setStyleSheet("QPushButton{"
                                 "border-bottom-right-radius: 15px;"
                                 "border-bottom-left-radius: 2px;  "
                                 "border-top-right-radius: 15px;  "
                                 "border-top-left-radius: 2px;  "
                                 "background-color: rgba(128, 128, 128, 20);"
                                 "}"
                                 "QPushButton:hover{"
                                 "background-color: rgba(0, 0, 0,20);"
                                 "}"
                                 "QPushButton:pressed,QToolButton:checked{"
                                 "background-color: rgb(255, 180, 200);"
                                 "}");
    ui->backBtn->hide();
    ui->deleteBtn->hide();
    ui->deletePic->hide();
    ui->cancelPic->hide();
    ui->editBtn->hide();
    ui->editPic->hide();
}

// 只有在有城市被选中时才能按下删除键或修改键
void CityManageWindow::updateCheckedButtons() {
    checkedButtons.clear();
    for (int i=0;i<BtnGroup->buttons().count();i++)
    {
        if (BtnGroup->button(i)->isChecked())
        {
            checkedButtons.push_back(BtnGroup->button(i));
        }
    }
    if(!checkedButtons.empty())
    {
        ui->deleteBtn->setEnabled(true);
        // 修改键在有且仅有一个城市被选中时才能按下
        if(checkedButtons.size()==1)
        {
            ui->editBtn->setEnabled(true);
        }
        else
        {
            ui->editBtn->setDisabled(true);
        }
    }
    else
    {
        ui->editBtn->setDisabled(true);
        ui->deleteBtn->setDisabled(true);
    }
}

// 修改键按下后编辑城市名
void CityManageWindow::on_editBtn_clicked()
{
    ChildWindow *childwindow=new ChildWindow;
    connect(childwindow->ui->sureBtn,&QPushButton::clicked,this,[this,childwindow](){
        for (QAbstractButton *button : checkedButtons) {
            QString cityName=childwindow->ui->targetEdit->text();
            button->setText(cityName);
            // 后端接口
             City c(cityName.toStdString(),0);
             update_city(c);
        }
        childwindow->close();
        delete childwindow;
        checkedButtons.clear();

        if(ui->backtoBtn->isVisible())
        {
            backtoBtnVisibleChange();
        }
        else
        {
            ui->backBtn->click();
            display(page);// 返回当前页面即可
        }
    });
    childwindow->setWindowModality(Qt::ApplicationModal); // 小窗开启时无法对主窗口进行操作
    childwindow->show();
    ui->deleteBtn->setEnabled(false);
    ui->editBtn->setEnabled(false);
}

// 按下取消按钮恢复原状
void CityManageWindow::on_backBtn_clicked()
{
    checkedButtons.clear();
    backtoBtnVisibleChange();
    // 城市按键恢复原状
    for(int i=0;i<BtnGroup->buttons().count();i++)
    {
        BtnGroup->button(i)->setDisabled(true);
        BtnGroup->button(i)->setStyleSheet("QPushButton{"
                                           "border-top-left-radius: 15px;/*圆角*/"
                                           "border-bottom-left-radius: 15px;  "
                                           "border-top-right-radius: 15px;"
                                           "border-bottom-right-radius: 15px;  "
                                           "background-color: rgba(128, 128, 128, 20);}"
                                           "/* 鼠标悬停 */"
                                           "QPushButton:hover{"
                                           "background-color: rgba(0, 0, 0,20);}"
                                           "QPushButton:checked{"
                                           "background-color: rgb(255, 180, 200);}");
        BtnGroup->button(i)->setChecked(false);
    }
}

// 点击查询键弹出小窗
void CityManageWindow::on_searchBtn_clicked()
{
    ChildWindow *childwindow=new ChildWindow;

    connect(childwindow->ui->sureBtn,&QPushButton::clicked,this,[=](){
        emit SearchTarget(childwindow->ui->targetEdit->text());
        childwindow->close();
        delete childwindow;
    });
    childwindow->setWindowModality(Qt::ApplicationModal);
    childwindow->show();
}

// 查询功能
void CityManageWindow::Search(QString city)
{
    for(int i=0;i<BtnGroup->buttons().count();i++)
    {
        if(city!=BtnGroup->button(i)->text())
            BtnGroup->button(i)->hide();
        else
            displayTarget(i);
    }
    ui->backtoBtn->show();
    ui->firstBtn->hide();
    ui->lastBtn->hide();
    ui->preBtn->hide();
    ui->nextBtn->hide();

    return;
}

// 点击增加弹出小窗
void CityManageWindow::on_addBtn_clicked()
{
    ChildWindow *childwindow=new ChildWindow;

    connect(childwindow,&ChildWindow::add,this,&CityManageWindow::AddTarget);
    childwindow->setWindowModality(Qt::ApplicationModal);
    childwindow->show();
}

// 返回按钮
void CityManageWindow::on_backtoBtn_clicked()
{
    display();
    page=0;
    changePage();
    ui->firstBtn->show();
    ui->lastBtn->show();
    ui->preBtn->show();
    ui->nextBtn->show();
    ui->backtoBtn->hide();
}

// 返回首页
void CityManageWindow::on_firstBtn_clicked()
{
    display();
    page=0;
    changePage();
}

// 尾页
void CityManageWindow::on_lastBtn_clicked()
{
    page=(BtnGroup->buttons().count()-1)/6;
    display(page);
    changePage();
}

// 下一页
void CityManageWindow::on_nextBtn_clicked()
{
    display(++page);
    changePage();
}

// 上一页
void CityManageWindow::on_preBtn_clicked()
{
    display(--page);
    changePage();
}

// 确认翻页按键是否可用
void CityManageWindow::changePage()
{
    ui->firstBtn->setEnabled(true);
    ui->nextBtn->setEnabled(true);
    ui->lastBtn->setEnabled(true);
    ui->preBtn->setEnabled(true);
    if(page==0)
    {
        ui->firstBtn->setDisabled(true);
        ui->preBtn->setDisabled(true);
    }
    if((BtnGroup->buttons().count()-1)/6==page)
    {
        ui->lastBtn->setDisabled(true);
        ui->nextBtn->setDisabled(true);
    }
}
