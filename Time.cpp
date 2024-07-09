#include "Time.h"
#include <regex>
#include <string>
#include "exceptions.h"

std::regex Time::timingPattern("([0-9]{1,2}):([0-9]{2})");
std::regex Time::timePattern("([0-9]{1,2})h([0-9]{2})min");

Time::Time() = default;
Time::Time(const std::string& s) {
    Time t;
    int res1 = t.parseTiming(s);
    int res2 = t.parseTime(s);
    int res = !res1 || !res2;//res==1:OK
    if (!res) {//not OK
        if (res1 == -1 || res2 == -1) {
            tmErr e("invalid time", s);
            throw e;
        }
        else {
            tmErr e("format wrong", s);
            throw e;
        }
    }
}
    
Time::Time(int hour, int minute) {
    if (legalHour(hour) && legalMin(minute)) {
        this->hour = hour;
        this->minute = minute;
    }
    else {
        tmErr e("invalid time", (std::to_string(hour)+": "+std::to_string(minute)));
        throw e;
    }
}

int Time::minutes() {
    return 60*hour+minute;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

std::string Time::str() {
    std::string str;
    str = std::to_string(hour) + "Hour " + std::to_string(minute) + "Minute";
    return str;
}

int Time::parseTiming(const std::string& s) {//解析hh:mm字符串表示的时间
    std::smatch sm;
    if (!regex_match(s, sm, timingPattern)) return 1;//并不是hh:mm表示
    
    int h, m;
    h = stoi(sm[1].str());
    m = stoi(sm[2].str());

    if (!legal(h, m)) return -1;

    hour = h;
    minute = m;

    return 0;
}

int Time::parseTime(const std::string& s) {//解析2h30min字符串表示的时间
    std::smatch sm;
    if (!regex_match(s, sm, timePattern)) return 1;//并不是这种表示
        
    int h, m;
    h = stoi(sm[1].str());
    m = stoi(sm[2].str());

    if (!legal(h, m)) return -1;

    hour = h;
    minute = m;

    return 0;
}

int Time::legal(int h, int m) noexcept{//一系列检测合法的函数
    return legalHour(h) && legalMin(m);
}
int Time::legalHour(int hour) noexcept{
    if (hour >= 24) return 0;
    if (hour < 0) return 0;
    return 1;
}
int Time::legalMin(int min) noexcept{
    if (min >= 60) return 0;
    if (min < 0) return 0;
    return 1;
}
