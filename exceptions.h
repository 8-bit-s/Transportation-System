#pragma once
#include <string>
#include <stdexcept>

class rdinErr: public std::runtime_error {//exception about reading files
public:
    explicit rdinErr(const std::string& msg, const std::string& lne):
        std::runtime_error(msg), wrg_line(lne) { }
        
    std::string wrg_line;//the line with readin error
};

class tmErr: public std::runtime_error {//exception about invalid time input
public:
    explicit tmErr(const std::string& msg, const std::string& time): std::runtime_error(msg), wrg_time(time) {}
    
    std::string wrg_time;//wrong_time input
};

class memErr: public std::runtime_error {//memory allocating error
public:
    explicit memErr(const std::string& msg): std::runtime_error(msg) {}
};

class menuErr: public std::logic_error {
public:
    explicit menuErr(const std::string& msg): std::logic_error(msg) {}
};

class cinErr :public std::logic_error {//invalid input error
public:
    explicit cinErr(const std::string& msg) : std::logic_error(msg) {}
};
