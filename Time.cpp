#include "Time.h"
#include <regex>

std::regex Time::timingPattern("([0-9]{1,2}):([0-9]{2})");
std::regex Time::timePattern("([0-9]{1,2})h([0-9]{2})min");