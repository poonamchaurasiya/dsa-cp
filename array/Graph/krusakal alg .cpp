#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};

// Disjoint Set Union (DSU) for cycle detection
class DSU {
    vector<int> parent;
public:
    DSU(int n) {
        parent.resize(n);
        for (int i = 0; i < n; i++) parent[i] = i;
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]); // Path compression
    }

    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) parent[root_i] = root_j;
    }
};

void kruskal(int V, vector<Edge>& edges) {
    sort(edges.begin(), edges.end()); // Step 1: Sort edges

    DSU dsu(V);
    vector<Edge> mst;
    int mstWeight = 0;

    for (auto& edge : edges) {
        // Step 2: Check if adding the edge creates a cycle
        if (dsu.find(edge.u) != dsu.find(edge.v)) {
            dsu.unite(edge.u, edge.v);
            mst.push_back(edge);
            mstWeight += edge.weight;
        }
    }

    cout << "Edges in MST:" << endl;
    for (auto& e : mst) {
        cout << e.u << " -- " << e.v << " == " << e.weight << endl;
    }
    cout << "Total MST Weight: " << mstWeight << endl;
}

int main() {
    int V = 4;
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}
    };

    kruskal(V, edges);
    return 0;
}
