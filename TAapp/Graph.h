#pragma once
#include "TripTable.h"

class Node
{
public:
    vector<Trip> Sdata;//SourceData
    int data;
    Node();
    void choose(int tripType, int method);
    int operator+(int n);
    bool operator<(Node& n);
};

typedef Node (*Matrix)[MAXCITY];//一行

class Graph {//用于算法的图
public:
    Graph();

    //~Graph();

    int init(vector<Trip>& trips);

    void Dijkstra(int, int, int, int);

    void printTrips(const City& stf, const City& arv);//测试用函数
private:
    int numV;//顶点数，即城市数
    int numE;//边数
    Matrix matrix;
};
