#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;
    void findSCCUtil(int u, vector<int>& disc, vector<int>& low, 
                    stack<int>& st, vector<bool>& onStack, int& time);

public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int u, int v) { adj[u].push_back(v); }
    void findSCCs();
};

void Graph::findSCCUtil(int u, vector<int>& disc, vector<int>& low, 
                        stack<int>& st, vector<bool>& onStack, int& time) {
    disc[u] = low[u] = ++time;
    st.push(u);
    onStack[u] = true;

    for (int v : adj[u]) {
    if (disc[v] == -1) {
            findSCCUtil(v, disc, low, st, onStack, time);
            low[u] = min(low[u], low[v]);
        } else if (onStack[v]) { 
            low[u] = min(low[u], disc[v]);
        }
    }

    
    if (low[u] == disc[u]) {
        cout << "SCC: ";
        while (true) {
            int node = st.top();
            st.pop();
            onStack[node] = false;
            cout << node << " ";
            if (node == u) break;
        }
        cout << endl;
    }
}

void Graph::findSCCs() {
    vector<int> disc(V, -1), low(V, -1);
    vector<bool> onStack(V, false);
    stack<int> st;
    int time = 0;

    for (int i = 0; i < V; i++) {
        if (disc[i] == -1)
            findSCCUtil(i, disc, low, st, onStack, time);
    }
}

int main() {
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    cout << "Strongly Connected Components in the graph:\n";
    g.findSCCs();
    return 0;
}
