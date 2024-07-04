#include <string>
#include "Time.h"
using std::string;

//使用枚举类型
enum Triptype{AIR,RAIL};

const int MEAN = 2;
const int MAXTRIP = 50;
const int MAXCITY = 10;

//每个城市对应一个编号，方便邻接表使用
class City {
public:
    City() = default;
    City(const string& name):name(name) {sign = -1;}
    string name;
    int sign;
};

struct Trip {//行程表条目
    friend Trip parseLine(const string& lne);
    Trip() {}
    Trip(const Trip& t) {}

    City stfCity;//始发站
    City arvCity;//终到站
    //Time stfTime;//出发时间setoffTime
    //Time arvTime;//到达时间arriveTime
    int exp;//expenses
    double dist;//distance
    Time time;//旅途时间
    Triptype type;//旅行方式

    Trip* next;//no need to say
};

class Menu {//条目表，链表，在堆上维护
public:
    Menu(): div(NULL), end(NULL), table(NULL) {
        cities = new City[MAXCITY];
        pool = NULL;
    }
    ~Menu() {

    }

    int addTrip(const Trip& t) noexcept{//添加行程，不会抛出异常
        Trip* n = new Trip(t);
        if (table == NULL) {
            table = n;
            return 0;
        }
        if (t.type == AIR) {
            end->next = n;
            n->next = NULL;
            end = n;
        }
        else if (t.type == RAIL) {
            n->next = div->next;
            div->next = n;
            div = n;
        }

        return 0;
    }

    int addCity(const City& c) {
        if (pool == NULL) {//未通过文件初始化，此时添加城市导致错误。如出现此异常，属于代码逻辑错误
            menuErr e("Add city before initing menu");
            throw e;
        }



        return 0;
    }

    int delCity(const City& c) {
        int id = c.sign;
        pool[id] = 1;
    }

    int initPool() {//初始化编号池
        pool = new int[MAXCITY];

        if (pool == NULL) {//异常处理
            memErr e("error newing the pool");
            throw e;
        }

        for (int i = 0; i < MAXCITY; i++) {
            pool[i] = 1;
        }
    }

    int clearPool() {
        if (pool == NULL) return 1;
        delete []pool;
        pool = NULL;
        return 0;
    }

private:
    Trip* div;//分界处，火车在前，航班在后。(指向最后一个火车Trip)
    Trip* end;//表尾(指向表尾元素)
    Trip* table;//表体
    City* cities;//所有城市
    int* pool;//编号池

    int getSign() {
        for (int i = 0; i < MAXCITY; i++) {
            if(pool[i]) {
                pool[i] = 0;
                return i;
            }
        }
    }
};