#include <string>
#include <stdexcept>

class rdinErr {
public:
    rdinErr(const std::string& msg): msg(msg) { }
//private:
    std::string msg;
};