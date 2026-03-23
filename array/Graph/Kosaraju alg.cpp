#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
    vector<vector<int>> revAdj;

    
    void fillOrder(int v, vector<bool> &visited, stack<int> &st) {
        visited[v] = true;
        for (int neighbor : adj[v]) {
            if (!visited[neighbor]) {
                fillOrder(neighbor, visited, st);
            }
        }
        st.push(v);
    }

    
    void dfsRev(int v, vector<bool> &visited) {
        visited[v] = true;
        cout << v << " ";
        for (int neighbor : revAdj[v]) {
            if (!visited[neighbor]) {
                dfsRev(neighbor, visited);
            }
        }
    }

public:
    Graph(int vertices) : V(vertices), adj(vertices), revAdj(vertices) {}

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        revAdj[v].push_back(u); 
    }

    void findSCCs() {
        stack<int> st;
        vector<bool> visited(V, false);

        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) fillOrder(i, visited, st);
        }

    
        fill(visited.begin(), visited.end(), false);

    
        cout << "Strongly Connected Components:" << endl;
        while (!st.empty()) {
            int v = st.top();
            st.pop();

            if (!visited[v]) {
                dfsRev(v, visited);
                cout << endl; 
            }
        }
    }
};

int main() {
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    g.findSCCs();

    return 0;
}
