#include "Graph.h"
#include "TripTable.h"

Node::Node() {
    //Sdata = new TripNode*[10];//10是两个城市间最多Trip数，不知道有什么简短概念能表述这个意思，故暂未定义为常量
    Sdata = NULL;
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

int Graph::init(Menu& m) {
    if (matrix == NULL) return -1;
    TripNode* tn = m.getTable();
    while(tn != NULL) {
        auto tt = tn->t;

        //********
        std::cout << tn->t.cost << "\n";
        //********

        if (matrix[tt.stfCity][tt.arvCity].Sdata == NULL) {
            matrix[tt.stfCity][tt.arvCity].Sdata = new TripNode*[10];
            matrix[tt.stfCity][tt.arvCity].Sdata[0] = tn;
        }
        else {
            std::cout << "matrix[" << tt.stfCity << "][" << tt.arvCity << "] is not NULL";
            int i;
            for (i = 1; matrix[tt.stfCity][tt.arvCity].Sdata[i] != NULL; i++) {}//找到数组中尚未储存的位置
            matrix[tt.stfCity][tt.arvCity].Sdata[i] = tn;//Sdata数组的第i个存储相应TripNode的地址

            //********
            std::cout << tn->t.cost << "\n";
            //********

        }
        tn = tn->next;//更新，为了遍历Menu的table链表
    }
    return 0;
}

void Graph::printTrips(const City& stf, const City& arv) {//测试用函数
    for (int i = 0; ; i++) {
        auto ptr = matrix[stf][arv].Sdata[i];
        if (ptr == NULL) break;
        std::cout << ptr->t.stfCity << "->" << ptr->t.arvCity << "\n";
    }
}