#include "TripTable.h"
#include <iostream>



//每个城市对应一个编号，方便邻接表使用

City::City() = default;
City::City(const string& name, int sign) :name(name), sign(sign) {}
City::operator int() const{
    return sign;
}

std::ostream& City::operator<<(std::ostream& os) const{
    os << name;

    return os;
}

