#pragma once
#include <string>
#include <iostream>
#include "Time.h"
using std::string;

//使用枚举类型
enum Triptype{AIR,RAIL};

const int MEAN = 2;
const int MAXCITY = 10;

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    City();
    City(const string& name);
    string name;
    int sign;
    operator int() const;
    std::ostream& operator <<(std::ostream& os) const;
};

struct Trip {//行程表条目
    friend Trip parseLine(const string& lne);
    //Trip() {}
    //Trip(const Trip& t) {}

    City stfCity;//始发站
    City arvCity;//终到站
    //Time stfTime;//出发时间setoffTime
    //Time arvTime;//到达时间arriveTime
    Triptype type;//旅行方式
    double dist;//distance
    Time time;//旅途时间
    int cost;//expenses
};

struct TripNode {
    TripNode();
    TripNode(const Trip& t, TripNode* next);
    Trip t;
    TripNode* next;
    operator Trip();//将TripNode转换为内置Trip类型，用于读数据
    Trip& operator*();//解引用返回内部Trip的引用，用于访问或更改
};

class Menu {//条目表，链表，在堆上维护
public:
    Menu();

    ~Menu();

    int addTrip(const Trip& t) noexcept;//添加行程，不会抛出异常

    int addCity(const City& c);

    int delCity(const City& c);

    int initPool();//初始化编号池

    int clearPool();

    string searchCity(int sign);

    int searchCity(const string& name);

    void searTrip(City);

    void disp();//测试用函数

    TripNode* getTable();

private:
    TripNode* div;//分界处，火车在前，航班在后。(指向最后一个火车Trip)
    TripNode* end;//表尾(指向表尾元素)
    TripNode* table;//表体
    City* cities;//所有城市
    int* pool;//编号池

    int getSign();
};