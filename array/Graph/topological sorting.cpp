#include<iostream>
#include<vector>
using namespace std;
void topologicalSortRec(vector<vector<int>> &graph, int start, bool visited[], vector<int> &stack)
{
    visited[start] = true;
    for (int i = 0; i < graph[start].size(); i++)
    {
        if (visited[graph[start][i]] == false)
        {
            topologicalSortRec(graph, graph[start][i], visited, stack);
        }
    }
    stack.push_back(start);
}