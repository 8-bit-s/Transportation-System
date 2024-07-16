#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Time.h"
using std::string;
using std::vector;

const int MAXCITY = 20;
const int MEAN = 2;

//使用枚举类型
enum Triptype{AIR,RAIL};

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    City();
    City(const string& name);
    City(const string& name, int sign);
    string name;
    int sign;
    operator int() const;
    std::ostream& operator <<(std::ostream& os) const;
};

//行程表条目
struct Trip {
    friend Trip parseLine(const string& lne);
    //Trip() {}
    //Trip(const Trip& t) {}

    int id;//primary key
    City stfCity;//始发站
    City arvCity;//终到站
    //Time stfTime;//出发时间setoffTime
    //Time arvTime;//到达时间arriveTime
    Triptype type;//旅行方式
    double dist;//distance
    Time time;//旅途时间
    int cost;//expenses
};