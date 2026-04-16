#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
    int timer;

    void dfs(int u, int p, vector<int>& disc, vector<int>& low, 
             vector<bool>& visited, vector<bool>& isAP) {
        visited[u] = true;
        disc[u] = low[u] = ++timer;
        int children = 0;

        for (int v : adj[u]) {
            if (v == p) continue;

            if (visited[v]) {
            
                low[u] = min(low[u], disc[v]);
            } else {
                
                children++;
                dfs(v, u, disc, low, visited, isAP);
                low[u] = min(low[u], low[v]);

                
                if (p != -1 && low[v] >= disc[u]) {
                    isAP[u] = true;
                }
            }
        }
    
        if (p == -1 && children > 1) {
            isAP[u] = true;
        }
    }

public:
    Graph(int V) : V(V), adj(V), timer(0) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void findAPs() {
        vector<int> disc(V, 0), low(V, 0);
        vector<bool> visited(V, false), isAP(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, -1, disc, low, visited, isAP);
            }
        }

        cout << "Articulation Points: ";
        for (int i = 0; i < V; i++) {
            if (isAP[i]) cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    g.findAPs();
    return 0;
}
