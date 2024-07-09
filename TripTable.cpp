#include "TripTable.h"
#include <iostream>

//每个城市对应一个编号，方便邻接表使用

City::City() = default;
City::City(const string& name):name(name) {sign = -1;}
City::operator int() const{
    return sign;
}

std::ostream& City::operator<<(std::ostream& os) const{
    os << name;

    return os;
}

TripNode::TripNode() = default;

TripNode::TripNode(const Trip& t, TripNode* next): t(t), next(next) { }
TripNode::operator Trip() {
    return t;
}

Trip& TripNode::operator*() {
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
        end = n;
        if (n->t.type == RAIL)
            div = n;
        return 0;
    }
    if (t.type == AIR) {
        end->next = n;
        n->next = NULL;
        end = n;
    }
    else if (t.type == RAIL) {
        if (div != NULL) {
            n->next = div->next;
            div->next = n;
            div = n;
        }
        else {
            n->next = table;
            table = n;
            div = n;
        }
    }

    return 0;
}

int Menu::addCity(const City& c) {
    if (pool == NULL) {//未通过文件初始化，此时添加城市导致错误。如出现此异常，属于代码逻辑错误
        menuErr e("Add city before initing menu");
        throw e;
    }

    City cc(c);
    cc.sign = getSign();
    cities[cc.sign] = cc;
        
    return 0;
}

int Menu::delCity(const City& c) {
    int id = c.sign;
    pool[id] = 1;
    return 0;
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

    return -1;//control never reaches here
}

void Menu::disp() {//测试用函数
    TripNode* it = table;
    int i = 1;
    while(it != NULL) {
        auto tmp = it->t;
        std::cout << tmp.stfCity.name << " -> " << tmp.arvCity.name << " with " << tmp.cost << "yuan\n";
        it = it->next;
    }
}

TripNode* Menu::getTable() {
    return table;
}