#include "TripTable.h"

//每个城市对应一个编号，方便邻接表使用

City::City() = default;
City::City(const string& name):name(name) {sign = -1;}
City::operator int() {
    return sign;
}

TripNode::TripNode(const Trip& t, TripNode* next): t(t), next(next) { }
TripNode::operator Trip() {
    return t;
}


Menu::Menu(): div(NULL), end(NULL), table(NULL) {
    cities = new City[MAXCITY];
    pool = NULL;
}
Menu::~Menu() {
    //********************************待完成********************************/
}

int Menu::addTrip(const Trip& t) noexcept{//添加行程，不会抛出异常
    TripNode* n = new TripNode(Trip(t), NULL);
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

int Menu::addCity(const City& c) {
    if (pool == NULL) {//未通过文件初始化，此时添加城市导致错误。如出现此异常，属于代码逻辑错误
        menuErr e("Add city before initing menu");
        throw e;
    }
        
    return 0;
}

int Menu::delCity(const City& c) {
    int id = c.sign;
    pool[id] = 1;
}

int Menu::initPool() {//初始化编号池
    pool = new int[MAXCITY];

    if (pool == NULL) {//异常处理
        memErr e("error newing the pool");
        throw e;
    }

    for (int i = 0; i < MAXCITY; i++) {
        pool[i] = 1;
    }
}

int Menu::clearPool() {
    if (pool == NULL) return 1;
    delete []pool;
    pool = NULL;
    return 0;
}

int Menu::getSign() {
    for (int i = 0; i < MAXCITY; i++) {
        if(pool[i]) {
            pool[i] = 0;
            return i;
        }
    }
}