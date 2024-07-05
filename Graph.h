#pragma once
#include "TripTable.h"

class Node
{
public:
    TripNode** Sdata;//SourceData
    int data;
    Node();
    void choose(int tripType, int method);
    int operator+(int n);
    bool operator<(Node& n);
};

//typedef Node (*Matrix)[MAXCITY];

class Graph {//用于算法的图
public:
    Graph();

    ~Graph();

    int init(Menu& m);

    void Dijkstra(Node**, int, int, int, int);
private:
    int numV;//顶点数，即城市数
    int numE;//边数，即Trip数
    Node matrix[MAXCITY][MAXCITY];//邻接矩阵
};