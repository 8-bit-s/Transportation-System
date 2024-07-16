#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "TimeClass.h"
using std::string;
using std::vector;

//使用枚举类型
enum Triptype{AIR,RAIL};

const int MEAN = 2;
const int MAXCITY = 10;//最大城市数

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    City();
    City(const string& name,int sign);
    string name;
    int sign;//编号
    operator int() const;
    std::ostream& operator <<(std::ostream& os) const;
};

//行程表条目
struct Trip {
    friend Trip parseLine(const string& lne);
    City stfCity;//始发站
    City arvCity;//终到站
    int cost;//expenses
    double dist;//distance
    Time time;//旅途时间
    Triptype type;//旅行方式
};
