#include <iostream>
#include <vector>
#include <climits>
using namespace std;


struct Edge { int src, dest, weight; };


void bellmanFord(int V, int E, vector<Edge>& edges, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src, v = edges[j].dest, w = edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }


    for (int j = 0; j < E; j++) {
        int u = edges[j].src, v = edges[j].dest, w = edges[j].weight;
        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            cout << "Negative weight cycle detected!" << endl;
            return;
        }
    }
}
