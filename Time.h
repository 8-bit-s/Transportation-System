#pragma once
#include <string>
#include "exceptions.h"
#include <regex>

class Time
{
public:
    Time() = default;
    Time(const std::string& s) {
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
    Time(int hour, int minute) {
        if (legalHour(hour) && legalMin(minute)) {
            this->hour = hour;
            this->minute = minute;
        }
        else {
            tmErr e("invalid time", (std::to_string(hour)+": "+std::to_string(minute)));
            throw e;
        }
    }

    int minutes() {
        return 60*hour+minute;
    }

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

private:

    int parseTiming(const std::string& s) {//解析hh:mm字符串表示的时间
        std::smatch sm;
        if (!regex_match(s, sm, timingPattern)) return 1;//并不是hh:mm表示
        
        int h, m;
        h = stoi(sm[0].str());
        h = stoi(sm[1].str());

        if (!legal(h, m)) return -1;

        hour = h;
        minute = m;

        return 0;
    }

    int parseTime(const std::string& s) {//解析2h30min字符串表示的时间
        std::smatch sm;
        if (!regex_match(s, sm, timePattern)) return 1;//并不是这种表示
        
        int h, m;
        h = stoi(sm[0].str());
        h = stoi(sm[1].str());

        if (!legal(h, m)) return -1;

        hour = h;
        minute = m;

        return 0;
    }

    static int legal(int h, int m) noexcept{//一系列检测合法的函数
        return legalHour(h)&&legalMin(m);
    }
    static int legalHour(int hour) noexcept{
        if (hour >= 24) return 0;
        if (hour < 0) return 0;
        return 1;
    }
    static int legalMin(int min) noexcept{
        if (min >= 60) return 0;
        if (min < 0) return 0;
        return 1;
    }

    int hour;
    int minute;

    static std::regex timingPattern;//时刻和时间模式，定义在Time.cpp中
    static std::regex timePattern;
};

/*
class Timing
{
public:
    int year;
    int month;
    int day;
    //int hour;
    //int minute;
    Timing(std::string s)
    {

    }
    Timing() {}
};
*/
//把时间和时刻分开