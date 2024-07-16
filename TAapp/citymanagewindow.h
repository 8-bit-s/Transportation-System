#ifndef CITYMANAGEWINDOW_H
#define CITYMANAGEWINDOW_H

#include <QWidget>
#include <QString>
#include <QVector>
#include <QButtonGroup>
#include "childwindow.h"

namespace Ui {
class CityManageWindow;
}

class CityManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CityManageWindow(QWidget *parent = nullptr);
    ~CityManageWindow();
private slots:
    void on_changeBtn_clicked();
    void on_searchBtn_clicked();
    void on_addBtn_clicked();
    void on_deleteBtn_clicked();
    void on_editBtn_clicked();
    void on_backBtn_clicked();
    void on_backtoBtn_clicked();
    void on_firstBtn_clicked();
    void on_lastBtn_clicked();
    void on_nextBtn_clicked();
    void on_preBtn_clicked();
    void on_closeBtn_clicked();
    void Search(QString city);
    void addCityBox(QString city);
    void updateCheckedButtons();
    void initial_list(QString city);

private:
    Ui::CityManageWindow *ui;
    QButtonGroup *BtnGroup;
    QVector<QAbstractButton *> checkedButtons;
    int page;// 记录页数
    void Initial();
    void display(int n=0,int x=75,int y=121);
    void displayTarget(int n,int x=75,int y=121);
    void changePage();
    void backtoBtnVisibleChange();

signals:
    void SearchTarget(QString city);// 传递查询时输入的城市名
    void AddTarget(QString city);// 传递查询时输入的城市名
};

#endif // CITYMANAGEWINDOW_H
