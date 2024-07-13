/*
*数据结构部分：
*维护一个行程条目表Menu，每个条目为条目类Trip。
*维护一个二维数组，用于算法实现的邻接矩阵。
*所有信息保存在Menu中，其中Trip保存任何一趟航班或车次的所有信息。因为两个城市之间有很多来往方式，选择存条目而非以城市为端点的边来保存信息。
*Menu前半部分维护航班信息，后半部分维护火车信息，方便之后功能扩展。它保存一个指针指向分界处和尾部，用于遍历
*邻接矩阵的每条边只需要保存一个指针，指向对应的表条目。
*可是选题要求使用邻接表
*/

#include <iostream>
#include <fstream>
#include <string>
#include "exceptions.h"
#include "TripTable.h"
#include "Graph.h"
#include "httplib.h"

using namespace std;

int readFile(const string& path, Menu& m);



int main() {
    httplib::Client cli("127.0.0.1:3000");
    httplib::Headers headers{
        { "Content-Type", "application/json" }
    };



    string body1 = R"({"stf": "Beijing", "arv": "Shanghai", "trip_type": 0, "dist": 10.4, "time": "01:03:03", "cost": 300 })";
    auto res1 = cli.Post("/", headers, body1, "application/json");
    cout << res1->body << endl;

    return 0;
}
