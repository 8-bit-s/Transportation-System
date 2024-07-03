#include <string>
#include <stdexcept>

class rdinErr {
public:
    rdinErr(const std::string& msg): msg(msg) { }
//private:
    std::string msg;
};

class tmErr {
public:
    tmErr(const std::string& time): wrg_time(time) {}
    void print();
private:
    std::string wrg_time;//wrong_time
};