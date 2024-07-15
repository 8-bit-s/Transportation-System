#include "TripTable.h"
#include <iostream>

//每个城市对应一个编号，方便邻接表使用

City::City() {
	name = "";
	sign = -1;
}
City::City(const string& name):name(name) {sign = -1;}
City::operator int() const{
    return sign;
}
City::City(const string& name, int sign): name(name), sign(sign) {}

std::ostream& City::operator<<(std::ostream& os) const{
    os << name;

    return os;
}