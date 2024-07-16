#ifndef TRIPMANAGEWINDOW_H
#define TRIPMANAGEWINDOW_H

#include <QWidget>
#include<QPushButton>
#include <vector>
#include "TripTable.h"
#include "addtripwindow.h"
#include"tripwindow.h"
# include "tripunit.h"


namespace Ui {
class TripManageWindow;
}

class TripManageWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TripManageWindow(QWidget *parent = nullptr);
    ~TripManageWindow();
    //将所有小窗口隐藏
    void hideWindows();

    QPushButton *back_button;

    void draw_citytag();
    void draw_costtag();
    void draw_typetag();
    void draw_timetag();
    void draw_distag();
    void update_triplist();


private slots:

    void choose_trip(tripUnit *t);

    //筛选按钮槽函数
    void on_search_button_clicked();

    //城市类函数
    void on_add_city_tag_clicked();
    void on_city_button_clicked();
    void delete_citytag(int i);


    //花费类函数
    void on_add_cost_tag_clicked();
    void on_cost_button_clicked();
    void delete_costtag(int i);

    //type类函数
    void on_type_button_clicked();

    //时间类函数
    void on_add_time_tag_clicked();
    void on_time_button_clicked();
    void delete_timetag(int i);

    //距离类函数
    void on_dis_button_clicked();
    void on_add_dis_tag_clicked();
    void delete_distag(int i);

    void modify_trip(int i,Trip trip);
    void deleteTrip(int i);

    //返回键
    void tripwindow_goback();
    void addwindow_goback();

    void beginSelect();
    void deleteSelect();
    void cancelSelect();
    void allSelect();

    void addTrip(Trip trip);

    void on_add_button_clicked();



private:

    Ui::TripManageWindow *ui;
    TripWindow *tripwindow;
    AddTripWindow *addtripwindow;
    QGridLayout *trip_layout;
    QPushButton *begin_select;
    QPushButton *all_select;
    QPushButton *delete_select;
    QPushButton *cancel_select;
    std::vector<Trip> trips;
    std::vector<std::string> begin_city_tags;
    std::vector<std::string> end_city_tags;
    std::vector<std::string> time_tags;
    std::vector<int> type_tags;
    std::vector<std::string> cost_tags;
    std::vector<std::string> dis_tags;

    std::vector<tripUnit *> tripunits;

    bool is_selecting=false;
};

#endif // TRIPMANAGEWINDOW_H
