#include <iostream>
#include <fstream>
#include <sstream>
#include "TripTable.h"
#include "exceptions.h"
#include <regex>

using namespace std;

Trip parseLine(const string& lne) {//存档格式：cityName->cityName: AIR 101.5km 2:30-3:40 3400yuan
                                    //之后使用正则表达式进行匹配
    try {//正则表达匹配，子串保存在sm中
        regex pattern("([A-Z][A-Za-z]+)\\-\\>([A-Z][A-Za-z]+): ([A-Z]+) ([0-9]+\\.?[0-9]*)km ([1-9]{1,2}:[0-9]{2})\\-([1-9]{1,2}:[0-9]{2}) ([0-9]*)yuan");
        smatch sm;

        if (!regex_match(lne, sm, pattern)) {//匹配失败，抛出格式异常错误，结束此行读入
            rdinErr e(lne);
            throw e;
        }
        Trip t;
        t.stfCity = sm[0].str();
        t.arvCity = sm[1].str();
        if (sm[2].str() == "AIR") {
            t.type = AIR;
        }
        else if (sm[2].str() == "RAIL") {
            t.type = RAIL;
        }
        else {//不存在的行程类型
            rdinErr e("type not exists\n");
            throw e;
        }
        t.dist = stod(sm[3].str());
        t.stfTime = Time(sm[4].str());
        t.arvTime = Time(sm[5].str());
        t.exp = stoi(sm[6].str());

    }
    catch(rdinErr e) {
        e.print();
    }
    
}

int readFile(const string& path, Menu m) {//之后可以改成异常处理,写入异常流或错误日志等
    ifstream ifs(path);
    if (!ifs.is_open()) {
        cout << "Opening file error.\n";
        return -1;
    }
    if (ifs.eof()) {
        cout << "File empty.\n";
        return -1;
    }
    while(!ifs.eof()) {
        string line;
        m.add(parseLine(line));
        
    }
}