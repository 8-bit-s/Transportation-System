#include <iostream>
#include <fstream>
#include <sstream>
#include "TripTable.h"
#include "exceptions.h"
#include <regex>
#include "Log.h"

extern Log logger;

using namespace std;

Trip parseLine(const string& lne) {//存档格式：CityName->CityName: AIR 101.5km 2h30min 3400yuan
                                   //之后使用正则表达式进行匹配
                                   //([1-9]{1,2}:[0-9]{2})\\-([1-9]{1,2}:[0-9]{2})匹配2:30-3:40
    Trip t;
    try {//正则表达匹配，子串保存在sm中
        regex pattern("([A-Z][A-Za-z]+)\\-\\>([A-Z][A-Za-z]+): ([A-Z]+) ([0-9]+\\.?[0-9]*)km ([0-9]{1,2}h[0-9]{2}min) ([0-9]*)yuan");
        smatch sm;

        if (!regex_match(lne, sm, pattern)) {//匹配失败，抛出格式异常错误，结束此行读入
            rdinErr e("format wrong", lne);
            throw e;
        }
        t.stfCity = sm[0].str();
        t.arvCity = sm[1].str();
        if (sm[2].str() == "AIR") {
            t.type = AIR;
        }
        else if (sm[2].str() == "RAIL") {
            t.type = RAIL;
        }
        else {//不存在的行程类型
            rdinErr e("type not exists", lne);
            throw e;
        }
        t.dist = stod(sm[3].str());
        //t.stfTime = Time(sm[4].str());
        //t.arvTime = Time(sm[5].str());
        t.time = Time(sm[4].str());
        t.exp = stoi(sm[5].str());
        t.next = NULL;
    }
    catch(rdinErr e) {//捕获错误，打印错误信息，并进一步抛出错误给主调函数，绕过无法执行的返回语句，由主调函数直接跳过错误行继续读取，增加程序健壮性
        cerr << e.wrg_line << ": " << e.what() << "\n";
        throw;
    }
    catch(tmErr e) {//可能也方便写日志，最终都统归于滴入错误来记录
        cerr << e.wrg_time << ": " << e.what() << "\n";
        rdinErr e("Time error", lne);
        throw e;
    }

    return t;
}

int readFile(const string& path, Menu& m) {//之后可以改成异常处理,写入异常流或错误日志等
    ifstream ifs(path);
    if (!ifs.is_open()) {
        cout << "Opening file error.\n";
        return -1;
    }
    if (ifs.eof()) {
        cout << "File empty.\n";
        return -1;
    }
        
    string line;
    m.initPool();//正式准备读入，可以初始化

    while (getline(ifs, line, ' ')) {//read cities
        try{
            m.addCity(line);
        }
        catch(menuErr e) {//如果读入城市错误
            cerr << e.what() << "\n";
            m.clearPool();//如果出错，menu重置到未初始化状态，方便之后再次初始化，并避免出错
            return -1;
        }
    }

    while(!ifs.eof()) {//read the trips part
        Trip t;
        getline(ifs, line);
        try{
            t = parseLine(line);
        }
        catch(rdinErr) {
            logger.write();//如果使用名字log，因为namespace导致“log 不明确”报错
            continue;
        }
        m.addTrip(t);//目前有一个错误未考虑：城市不在已录入的城市列表中
    }


}