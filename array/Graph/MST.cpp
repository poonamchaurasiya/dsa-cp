#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};

struct DSU {
    vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]); 
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) parent[root_i] = root_j;
    }
};

int main() {
    int V = 4; 
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, 
        {1, 3, 15}, {2, 3, 4}
    };

    sort(edges.begin(), edges.end()); 

    DSU dsu(V);
    int total_cost = 0;
    cout << "Edges in the MST:" << endl;

    for (Edge e : edges) {
        if (dsu.find(e.u) != dsu.find(e.v)) {
            dsu.unite(e.u, e.v);
            total_cost += e.weight;
            cout << e.u << " -- " << e.v << " == " << e.weight << endl;
        }
    }

    cout << "Minimum Total Cost: " << total_cost << endl;
    return 0;
}
