#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Time.h"
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
    City(const string& name);
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

    City stfCity;//始发站
    City arvCity;//终到站
    //Time stfTime;//出发时间setoffTime
    //Time arvTime;//到达时间arriveTime
    int cost;//expenses
    double dist;//distance
    Time time;//旅途时间
    Triptype type;//旅行方式
};

//行程节点类，方便使用链表形式存储行程信息
struct TripNode {
    TripNode();
    TripNode(const Trip& t, TripNode* next);
    Trip t;
    TripNode* next;
    operator Trip();//将TripNode转换为内置Trip类型，用于读数据
    Trip& operator*();//解引用返回内部Trip的引用，用于访问或更改
};

//条目表，链表，在堆上维护
class Menu {
public:
    Menu();

    //添加行程，不会抛出异常
    int addTrip(const Trip& t);

    //添加城市
    int addCity(const City& c);

    //修改城市信息 
    int updCity(City& city, string name);

    //修改行程信息
    int updTrip(TripNode* trip, City stfCity1, City arvCity1, int cost1, int dist1, int hour1, int minute1, Triptype type1);

    //删除城市信息
    int delCity(const City& city);

    //删除行程信息
    int delTrip(TripNode* trip);

    //初始化编号池
    int initPool();

    //清空编号池
    int clearPool();

    //查找函数，有始发站，终到站，旅行方式三种查询方式
    vector<TripNode*> searchTrip(const Menu menu, string stfCity, string arvCity, Triptype type);

    //三个子功能，供上面的查找函数调用
    vector<TripNode*> searchTripByStf(vector<TripNode*>list, string stfCity);

    vector<TripNode*> searchTripByArv(vector<TripNode*>list, string arvCity);

    vector<TripNode*> searchTripByType(vector<TripNode*>list, Triptype type);

    //bool cmpByCost(TripNode* t1, TripNode* t2);

    //bool cmpByDist(TripNode* t1, TripNode* t2);

    //bool cmpByTime(TripNode* t1, TripNode* t2);

    //vector<TripNode*> sortTripByCost(int cost);

    //vector<TripNode*> sortTripByDist(int dist);
    //
    //vector<TripNode*> sortTripByTime(Time time);

    //前后端交互函数，为前端提供翻页功能(无需测试)
    vector<TripNode*> page(vector<TripNode*>tripList, int& count);

    //测试用函数
    void disp();

    TripNode* getTable();

private:
    TripNode* div;//分界处，火车在前，航班在后。(指向最后一个火车Trip)
    TripNode* end;//表尾(指向表尾元素)
    TripNode* table;//表体
    City* cities;//所有城市
    int* pool;//编号池

    int getSign();
};