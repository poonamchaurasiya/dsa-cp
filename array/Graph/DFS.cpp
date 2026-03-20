#include<iostream>
#include<vector>
using namespace std ;
void DFS Rec (vector<int>adj[], int start, bool visited[])
{
    visited[start] = true;
    cout << start << " ";
    for (int i = 0; i < adj[start].size(); i++)
    {
        if (visited[adj[start][i]] == false)
        {
            DFS Rec(adj, adj[start][i], visited);
        }
    }
}
void DFS (vector<int>adj[], int v, int start)
{
    bool visited[v+1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    DFS Rec(adj, start, visited);
}