#pragma once

#include<iostream>
#include <vector>
#include <climits>

using namespace std;

#define V 6

class Trip
{
public:
    int src;
    int dest;
    int airTime;
    int railTime;
    int airCost;
    int railCost;
    Trip(int a,int b,int c,int d,int e,int f)
    {
        src = a;
        dest = b;
        airTime = c;
        railTime = d;
        airCost = e;
        railCost = f;
    }
    Trip():Trip(0,0,0,0,0,0){}
};
class Node
{
public:
    Trip* Sdata;
    int data;
    Node(Trip* T)
    {
        Sdata = T;
        data = 0;
    }
    Node():Node(NULL){}
    void Tdata(int tripType, int method)
    {
        int sw = tripType * 10 + method;
        switch (sw)
        {
        case 0:
            data = Sdata->airTime;
            break;
        case 1:
            data = Sdata->railTime;
            break;
        case 10:
            data = Sdata->airCost;
            break;
        case 11:
            data = Sdata->railCost;
            break;
        }
    };
    bool operator<(Node& n)
    {
        return (this->data <n.data);
    }
    int operator+(int n)
    {
        return(this->data + n);
    }
};

class Graph
{
public:
    Graph() {}

    int graph[V][V];
    void Dijkstra(Node* graph[], int src);
    vector<int> path(const vector<int>& dist);
};

int minDistance(const vector<int>& dist, const vector<bool>& visited)
{
    int minDist = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] < minDist)
        {
            minDist = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

vector<int> Graph::path(const vector<int>& dist)
{
    vector<int> ve;
    for (int i = 0; i < V; i++)
    {
        cout << i << " " << dist[i] << endl;
    }
    return ve;
}

void Graph::Dijkstra(Node* graph[], int src)
{
    vector<int> dist(V, INT_MAX);
    vector<bool> visited(V, false);
    dist[src] = 0;

    for (int count = 0; count < V - 1; ++count)
    {
        int u = minDistance(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; ++v)
        {
            if (!visited[v]&& dist[u] != INT_MAX && (graph[u][v]+dist[u]< dist[v]))
            {
                dist[v] = graph[u][v] + dist[u];
            }
        }
    }

    path(dist);
}

int main()
{
    Trip* t1=new Trip(0, 0, 30, 0, 0, 0);
    Trip* t2 = new Trip(0, 0, 20, 0, 0, 0);
    Node n1(t1);
    n1.Tdata(0, 0);
    Node n2(t2);
    n2.Tdata(0, 0);
    cout << (n1 < n2);
    return 0;
}