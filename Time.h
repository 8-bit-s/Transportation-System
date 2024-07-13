#pragma once
#include <string>
#include "exceptions.h"
#include <regex>

class Time
{
public:
    Time();
    Time(const std::string& s);
    Time(int hour, int minute);

    int minutes()const;//返回所有的分钟数

    int getHour()const;

    int getMinute()const;

    std::string str()const;//返回打印形式字符串

    std::string timeStr()const;//hh:mm格式
private:

    int parseTiming(const std::string& s);//解析hh:mm字符串表示的时间

    int parseTime(const std::string& s);//解析2h30min字符串表示的时间

    static int legal(int h, int m) noexcept;//一系列检测合法的函数
    static int legalHour(int hour) noexcept;
    static int legalMin(int min) noexcept;

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