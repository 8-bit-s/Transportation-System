#include "exceptions.h"
#include <iostream>

using std::cout;

void rdinErr::print() {
    cout << "format error: " << wrg_lne << "\n";
}

void tmErr::print() {
    cout << "invalid time: " << wrg_time << "\n";
}