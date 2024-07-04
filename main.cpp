/*
*数据结构部分：
*维护一个行程条目表Menu，每个条目为条目类Trip。
*维护一个二维数组，用于算法实现的邻接矩阵。
*所有信息保存在Menu中，其中Trip保存任何一趟航班或车次的所有信息。因为两个城市之间有很多来往方式，选择存条目而非以城市为端点的边来保存信息。
*Menu前半部分维护航班信息，后半部分维护火车信息，方便之后功能扩展。它保存一个指针指向分界处和尾部，用于遍历
*邻接矩阵的每条边只需要保存一个指针，指向对应的表条目。
*可是选题要求使用邻接表
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "exceptions.h"

using namespace std;

//使用枚举类型
enum Triptype{AIR,RAIL};

const int MEAN = 2;
const int MAXTRIP = 50;

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    string name;
    int sign;
};

class Time
{
public:
    int hour;
    int minute;
};

class Timing
{
public:
    int year;
    int month;
    int day;
    /*int hour;
    int minute;*/
    Timing(string s)
    {

    }
    Timing() {}
};

//把时间和时刻分开
struct Trip {//行程表条目
    friend Trip parseLine(const string& lne);
    Trip() {}
    Trip(const Trip& t) {}

    City stfCity;//始发站
    City arvCity;//终到站
    Timing stfTime;//出发时间setoffTime
    Timing arvTime;//到达时间arriveTime
    int exp;//expenses
    double dist;//distance
    Time time;//旅途时间
    Triptype type;//旅行方式
};

class Node {
public:
    int adjvex;
    Trip* data;//权值
    Node* next;
    Node(int i) : data(nullptr), next(nullptr) //等待补完
    {
        adjvex = i;
    }
    Node() :Node(0) {};
};

class HNode//头节点特殊
{
public:
    int adjves;
    Node* next;
};

// 图的邻接表数据结构类
class Graph
{
private:
    int numV;//顶点数
    int numE;//边数
    vector<HNode*> adjLists;
public:
    Graph(int n, int e) : numV(n), numE(e)
    {
    }
};

class Menu {
public:
    Menu(): div(0), end(0) {
        table = new Trip[MAXTRIP];
    }
    ~Menu() {delete []table;}

    int add(const Trip& t) {
        table[end++] = t;
        return 0;
    }
private:
    int div;//分界处
    int end;//表尾(尾后指针)
    Trip* table;//表体

    int sort() {//未完成
        int flag = 1;

        while(flag) {
            int ptr = end-1;
            while(ptr != div)
                ptr = div;
            flag = 0;
        }
    }
};

Trip parseLine(const string& lne) {//存档格式：cityName->cityName: AIR 101.5km 2h30min 3400yuan
    Trip t;                        //之后使用正则表达式进行匹配
    string rd;
    try {
        stringstream ss(lne);
        ss >> rd;
        if (rd.back() != ':') {
            rdinErr e("format wrong.\n");
            throw e;
        }
        rd.pop_back();
        auto div = rd.find('-');
    }
    catch(rdinErr e) {
        //cout << e.msg;
    }
    
}

/*
int readFile(const string& path, Menu m) {//之后可以改成异常处理,写入异常流或错误日志等
    ifstream ifs(path);
    if (!ifs.is_open()) {
        cout << "Opening file error.\n";
        return -1;
    }
    if (ifs.eof()) {
        cout << "File empty.\n";
        return -1;
    }
    while(!ifs.eof()) {
        string line;
        m.add(parseLine(line));
        
    }
}
*/