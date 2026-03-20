#include < iostream>
#include < vector>
using namespace std;
void BFS (vector<vector<int>> &graph, int start)
{
    bool visited[v+1];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    vector<int> queue;
    visited[start] = true;
    queue.push_back(start);
    while (q empty () == false){
        int u = queue.front();
        q.pop();
        cout << u << " ";
        for (int i = 0; i < graph[u].size(); i++)
        {
            if (visited[graph[u][i]] == false)
            {
                visited[graph[u][i]] = true;
                queue.push_back(graph[u][i]);
            }
        }
    }