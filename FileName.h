#pragma once

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define V 6//城市数也是顶点数
const int INF = INT_MAX;

enum TripType{AIR,RAIL};

class Trip 
{
public:
    int src;
    int dest;
    int Time;
    int Cost;  
    TripType triptype;
};

//用Node包装Trip**，方便扩展
class Node
{
public:
    Trip** Sdata;
    int data;      
    //方式和交通控制在九种以内 
    //遍历Trip*数组并在相应条件下找到权值
    void Tdata(int tripType, int method)
    {
        int sw = tripType * 10 + method;
        switch(sw)
        {
        case 0:
            break;
        case 1:
            break;
        case 10:
            break;
        case 11:
            break;
        default:
            break;
        }
    };
    int operator+(int n)
    {
        return this->data + n;
    }
};

class Graph
{
public:
	Graph()
    {
        //读取数据建图
    }
    Node gragh[V][V];
    void Dijkstra(Node** graph, int src,int dest);
	vector<int> path(const vector<int>& dist);
};

void Graph::Dijkstra(Node** g, int src, int dest)
{
    int v = src;
    int dist[V];
    int path[V];
    int S[V];
    for(int i=0;i<V;i++)
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
    for(int i=0;i<V-1;i++)
    {
        mindus = INF;
        for(int j=0;j<V;j++)
        {
            if(S[j]==0&&dist[j]<mindus)
            {
                u = j;
                mindus = dist[j];
            }
        }
        S[u] = 1;
        for(int j=0;j<V;j++)
        {
            if(S[j]==0)
                if (g[u][j].data < INF && g[u][j] + dist[u] < dist[j])
                {
                    dist[j] = g[u][j] + dist[u];
                    path[j] = u;
                }
        }
    }
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
        cout << "NO";
}
