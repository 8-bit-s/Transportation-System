#ifndef CITYMANAGEWINDOW_H
#define CITYMANAGEWINDOW_H

#include <QWidget>
#include <memory>
#include <QString>
#include <vector>
#include "citybox.h"
#include "searchwindow.h"
#include "addwindow.h"

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
    void on_backBtn_clicked();
    void Search(QString city);
    void addCityBox(QString city);
    void eraseCityBox(int i);
    void Initial();
    void display(int i=0);
private:
    Ui::CityManageWindow *ui;
    std::vector<CityBox*> vCity;

signals:
    void deleteable();
    void SearchTarget(QString city);// 传递查询时输入的城市名
    void AddTarget(QString city);// 传递查询时输入的城市名
};

#endif // CITYMANAGEWINDOW_H
