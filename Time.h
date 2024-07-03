#include <string>
#include "exceptions.h"

class Time
{
public:
    Time() = default;
    Time(const string& tstr) {
        hour = stoi(tstr.substr(tstr.begin(), tstr.find(':')))
    }
    Time(int hour, int minute) {
        if (legalHour(hour) && legalMin(minute)) {
            this->hour = hour;
            this->minute = minute;
        }
        else {
            tmErr(to_string(hour)+": "+to_string(minute));
        }
    }
private:
    static int legalHour(int hour) {
        if (hour >= 24) return 0;
        if (hour < 0) return 0;
        return 1;
    }
    static int legalMin(int min) {
        if (min >= 60) return 0;
        if (min < 0) return 0;
        return 1;
    }

    int hour;
    int minute;
};

class Timing
{
public:
    int year;
    int month;
    int day;
    /*int hour;
    int minute;*/
    Timing(std::string s)
    {

    }
    Timing() {}
};
//把时间和时刻分开