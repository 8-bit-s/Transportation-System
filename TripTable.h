#include <string>
#include "Time.h"
using std::string;

//使用枚举类型
enum Triptype{AIR,RAIL};

const int MEAN = 2;
const int MAXTRIP = 50;

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    City() = default;
    City(string name):name(name) {sign = 0;}
    string name;
    int sign;
};

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