#include <iostream>
#include <vector>
using namespace std;
void add Edgevecotr(vector<vector<int>> &graph, int u, int v)
{
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void print Graph(vector<vector<int>> &graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int V = 5;
    vector<vector<int>> graph(V);
    add Edgevecotr(graph, 0, 1);
    add Edgevecotr(graph, 0, 4);
    add Edgevecotr(graph, 1, 2);
    add Edgevecotr(graph, 1, 3);
    add Edgevecotr(graph, 1, 4);
    add Edgevecotr(graph, 2, 3);
    add Edgevecotr(graph, 3, 4);
    print Graph(graph);

return 0;
}
