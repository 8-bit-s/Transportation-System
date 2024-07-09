#include "TripTable.h"

struct Node {
    Trip* ptr;
};
typedef Node (*Matrix)[MAXCITY];

class Graph {//用于算法的图
public:
    Graph(): numV(0), numE(0) {
        matrix = new Node[MAXCITY][MAXCITY];//只是简单地开辟空间，数值的填入在init()函数中
    }

    ~Graph() {

    }

    int init(Menu& m) {
        
    }
private:
    int numV;//顶点数，即城市数
    int numE;//边数，即Trip数
    Matrix matrix;//邻接矩阵
};