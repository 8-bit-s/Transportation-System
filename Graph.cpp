#include "Graph.h"

Node::Node() {
    //Sdata = new TripNode*[10];//10是两个城市间最多Trip数，不知道有什么简短概念能表述这个意思，故暂未定义为常量
    data = 0;
}

Graph::Graph() {
    matrix = new Node[MAXCITY][MAXCITY];
    /*
    for (int i = 0; i < MAXCITY; i++) {
        for (int j = 0; j < MAXCITY; j++) {
            matrix[i][j].Sdata = NULL;
        }
    }
    */
}

int Graph::init(vector<Trip>& trips) {
    int size = trips.size();
    for (int i = 0; i < size; i++) {
        int stf = trips[i].stfCity.sign;
        int arv = trips[i].arvCity.sign;
        matrix[stf][arv].Sdata.push_back(trips[i]);
    }
    return 0;
}

void Graph::printTrips(const City& stf, const City& arv) {//测试用函数
    for (int i = 0;i< matrix[stf][arv].Sdata.size(); i++) {
        std::cout << matrix[stf][arv].Sdata[i].stfCity << "->" << matrix[stf][arv].Sdata[i].arvCity << "\n";
    }
}