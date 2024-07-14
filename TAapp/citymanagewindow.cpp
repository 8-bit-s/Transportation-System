#include "citymanagewindow.h"
#include "ui_citymanagewindow.h"
#include "ui_childwindow.h"
#include <QPixmap>
#include <algorithm>
#include <QString>
#include <QIcon>
#include <QDebug>

CityManageWindow::CityManageWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CityManageWindow)
    , page(0)
{
    ui->setupUi(this);
    hide();

    BtnGroup=new QButtonGroup(this);     //使得城市可以多选
    BtnGroup->setExclusive(false);
    // ToolBtnGroup=new QButtonGroup(this); //用来保证操作键只能单选
    // ToolBtnGroup->setExclusive(true);
    // ToolBtnGroup->addButton(ui->addBtn);
    // ToolBtnGroup->addButton(ui->searchBtn);
    // ToolBtnGroup->addButton(ui->changeBtn);

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
    ui->searchBtn->move(70,50);
    ui->addBtn->move(190,50);
    ui->changeBtn->move(310,50);
    ui->deleteBtn->move(430,50);
    ui->editBtn->move(550,50);
    ui->backBtn->move(670,50);
    ui->searchPic->move(157,58);
    ui->addPic->move(277,58);
    ui->changePic->move(397,58);
    ui->deletePic->move(517,58);
    ui->editPic->move(637,58);
    ui->cancelPic->move(757,58);

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
    int num,rid,i=0,j=0;
    num=6*n;
    while(num<BtnGroup->buttons().count()&&j<BtnGroup->buttons().count())
    {
        if(j>=num&&i<6)
        {
            x=75;y=121;
            num=i+6*n;
            rid=id[num];// 通过id数组获取按钮的id值
            if(num>=BtnGroup->buttons().count())
                break;
            if(num/3==1)
                y+=240;
            if(num%3==1)
                x+=285;
            else if(num%3==2)
                x+=570;
            BtnGroup->button(rid)->move(x,y);
            BtnGroup->button(rid)->show();
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
    BtnGroup->button(id[n])->move(x,y);
    BtnGroup->button(id[n])->show();
}

// 初始化城市列表
void CityManageWindow::Initial()
{
    // get_city();

    display();
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

            return;
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
                     "background-color: rgb(255, 180, 200);}");
    p->setFont(QFont(".AppleSystemUIFont",36,QFont::Bold));
    p->setDisabled(true); // 此时不可按

    BtnGroup->addButton(p,BtnGroup->buttons().count());
    id.push_back(BtnGroup->buttons().count()-1);

    connect(p,&QPushButton::toggled,this,&CityManageWindow::updateCheckedButtons);
    int n=(BtnGroup->buttons().count()-1)/6;
    display(n);
    page=n;
    changePage();

    // 与后段的接口
    // City c(p->text());
    // new_city(c);
}

// 点击编辑按钮后才能选中城市 供删改操作
void CityManageWindow::on_changeBtn_clicked()
{
    ui->changeBtn->setStyleSheet("QPushButton{background-color: rgb(255, 180, 200);}");
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
        BtnGroup->button(id[i])->setEnabled(true);
    }
}

// 按下删除键删除
void CityManageWindow::on_deleteBtn_clicked()
{
    for (QAbstractButton *button : checkedButtons) {
        // 与后段接口
        // City c(button->text());
        // delete_city(c);

        id.erase(std::find(id.begin(),id.end(),BtnGroup->id(button)));
        BtnGroup->removeButton(button);
        delete button;
    }
    checkedButtons.clear();
    ui->deleteBtn->setEnabled(false);
    ui->editBtn->setEnabled(false);
    if(ui->backtoBtn->isVisible())
    {
        ui->changeBtn->setEnabled(true);
        ui->addBtn->setEnabled(true);
        ui->searchBtn->setEnabled(true);
        ui->changeBtn->setStyleSheet("QPushButton{border-bottom-right-radius: 15px;  border-bottom-left-radius: 2px;  border-top-right-radius: 15px;  border-top-left-radius: 2px;  background-color: rgba(128, 128, 128, 20);}QPushButton:hover{background-color: rgba(0, 0, 0,20);}QPushButton:pressed,QToolButton:checked{background-color: rgb(255, 180, 200);}");
        ui->backBtn->hide();
        ui->deleteBtn->hide();
        ui->deletePic->hide();
        ui->cancelPic->hide();
        ui->editBtn->hide();
        ui->editPic->hide();
    }
    else
    {
        ui->backBtn->click();
        display();// 返回首页
    }
}

// 只有在有城市被选中时才能按下删除键或修改键
void CityManageWindow::updateCheckedButtons() {
    checkedButtons.clear();
    for (int i=0;i<BtnGroup->buttons().count();i++)
    {
        if (BtnGroup->button(id[i])->isChecked())
        {
            checkedButtons.push_back(BtnGroup->button(id[i]));
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
            // City c(cityName.toStdString());
            // update_city(c);
        }
        childwindow->close();
        checkedButtons.clear();

        if(ui->backtoBtn->isVisible())
        {
            ui->changeBtn->setEnabled(true);
            ui->addBtn->setEnabled(true);
            ui->searchBtn->setEnabled(true);
            ui->changeBtn->setStyleSheet("QPushButton{border-bottom-right-radius: 15px;  border-bottom-left-radius: 2px;  border-top-right-radius: 15px;  border-top-left-radius: 2px;  background-color: rgba(128, 128, 128, 20);}QPushButton:hover{background-color: rgba(0, 0, 0,20);}QPushButton:pressed,QToolButton:checked{background-color: rgb(255, 180, 200);}");
            ui->backBtn->hide();
            ui->deleteBtn->hide();
            ui->deletePic->hide();
            ui->cancelPic->hide();
            ui->editBtn->hide();
            ui->editPic->hide();
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
    ui->changeBtn->setEnabled(true);
    ui->addBtn->setEnabled(true);
    ui->searchBtn->setEnabled(true);
    ui->changeBtn->setStyleSheet("QPushButton{border-bottom-right-radius: 15px;  border-bottom-left-radius: 2px;  border-top-right-radius: 15px;  border-top-left-radius: 2px;  background-color: rgba(128, 128, 128, 20);}QPushButton:hover{background-color: rgba(0, 0, 0,20);}QPushButton:pressed,QToolButton:checked{background-color: rgb(255, 180, 200);}");
    ui->backBtn->hide();
    ui->deleteBtn->hide();
    ui->deletePic->hide();
    ui->editBtn->hide();
    ui->editPic->hide();
    ui->cancelPic->hide();
    for(int i=0;i<BtnGroup->buttons().count();i++)
    {
        BtnGroup->button(id[i])->setDisabled(true);
        BtnGroup->button(id[i])->setStyleSheet("QPushButton{"
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
        BtnGroup->button(id[i])->setChecked(false);
    }
}

// 点击查询键弹出小窗
void CityManageWindow::on_searchBtn_clicked()
{
    ChildWindow *childwindow=new ChildWindow;

    connect(childwindow->ui->sureBtn,&QPushButton::clicked,this,[=](){
        emit SearchTarget(childwindow->ui->targetEdit->text());
        childwindow->close();
    });
    childwindow->setWindowModality(Qt::ApplicationModal);
    childwindow->show();
}

// 查询功能
void CityManageWindow::Search(QString city)
{
    for(int i=0;i<BtnGroup->buttons().count();i++)
    {
        if(city!=BtnGroup->button(id[i])->text())
            BtnGroup->button(id[i])->hide();
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
