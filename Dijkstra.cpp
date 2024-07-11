#include"TripTable.h"
#include<iostream>
#include<vector>
#include"Graph.h"

using namespace std;

#define V MAXCITY
#define g matrix
const int INF = INT_MAX;

void Node::choose(int tripType, int method)
{
    int sw = tripType * 10 + method;
    TripNode* p = Sdata;
    data = INF;
    switch (sw)
    {
    case 0:
        while (p != NULL)
        {
            if (p->t.type == AIR)
            {
                if (p->t.time.minutes() < data)
                {
                    data = p->t.time.minutes();
                }
            }
            p = p->next;
        }
        break;
    case 10:
        while (p != NULL)
        {
            if (p->t.type == RAIL)
            {
                if (p->t.time.minutes() < data)
                {
                    data = p->t.time.minutes();
                }
            }
            p = p->next;
        }
        break;
    case 1:
        while (p != NULL)
        {
            if (p->t.type == AIR)
            {
                if (p->t.cost < data)
                {
                    data = p->t.cost;
                }
            }
            p = p->next;
        }
        break;
    case 11:
        while (p != NULL)
        {
            if (p->t.type == RAIL)
            {
                if (p->t.cost < data)
                {
                    data = p->t.cost;
                }
            }
            p = p->next;
        }
        break;
    default:
        break;
    }
};

int Node::operator+(int n)
{
    return this->data + n;
}

bool Node::operator<(Node& n)
{
    return this->data < n.data;
}

void Graph::Dijkstra(int src, int dest, int tripType, int method)
{
    //第一部分，将图等效为int图
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (g[i][j].Sdata != NULL)
            {
                g[i][j].choose(tripType, method);//赋予权值
            }
        }
    }

    //第二部分，主体算法
    int v = src;//简化变量名称
    int dist[V];
    int path[V];
    int S[V];
    for (int i = 0; i < V; i++)
    {
        dist[i] = g[v][i].data;
        S[i] = 0;
        if (g[v][i].data != 0 && g[v][i].data < INF)
            path[i] = v;
        else
            path[i] = -1;
    }
    S[v] = 1;
    int mindus = -1;
    int u = -1;
    for (int i = 0; i < V - 1; i++)
    {
        mindus = INF;
        for (int j = 0; j < V; j++)
        {
            if (S[j] == 0 && dist[j] < mindus)
            {
                u = j;
                mindus = dist[j];
            }
        }
        S[u] = 1;
        for (int j = 0; j < V; j++)
        {
            if (S[j] == 0)
                if (g[u][j].data < INF && g[u][j] + dist[u] < dist[j])
                {
                    dist[j] = g[u][j] + dist[u];
                    path[j] = u;
                }
        }
    }

    //第三部分，打印路径和结果，根据前端不同改变
    int i = dest;
    if (S[i] == 1 && i != v)
    {
        vector<int> apath;
        cout << dist[i];
        apath.push_back(i);
        int pre = path[i];
        while (pre != v)
        {
            apath.push_back(i);
            pre = path[pre];
        }
        cout << v;
        for (int k = apath.size() - 1; k >= 0; k--)
            cout << apath[k];
    }
    else
        cout << "NOPath";
}
