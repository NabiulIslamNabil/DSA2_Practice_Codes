#include <bits/stdc++.h>
using namespace std;

int dist[100];
int V, E;

void initialize() {
    for (int i = 0; i < 100; i++) {
        dist[i] = INT_MAX;
    }
}

void bellmanFord(int cost[][100], int source) {
    dist[source] = 0;

    
    for (int i = 1; i < V; i++) {
        for (int u = 0; u < V; u++) {
            for (int v = 0; v < V; v++) {
                if (cost[u][v] != 0 && dist[u] + cost[u][v] < dist[v]) {
                    dist[v] = dist[u] + cost[u][v];
                }
            }
        }
    }

    for (int u = 0; u < V; u++) {
        for (int v = 0; v < V; v++) {
            if (cost[u][v] != 0 && dist[u] != INT_MAX && dist[u] + cost[u][v] < dist[v]) {
                cout << "Graph contains negative weight cycle." << endl;
                return;
            }
        }
    }

    // Print the results
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX) {
            cout << i << " is unreachable from the source." << endl;
        } else {
            cout << i << " " << dist[i] << endl;
        }
    }
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> V;

    cout << "Enter the number of edges: ";
    cin >> E;

    int cost[100][100];
    
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            cost[i][j] = 0;
        }
    } 

    initialize();

    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cout << "Enter start node, end node and weight: ";
        cin >> u >> v >> weight;
        cost[u][v] = weight; // For directional graph
        // cost[v][u] = weight; //For bidirectional graph
    }

    int source;
    cout << "Enter the source node: ";
    cin >> source;

    bellmanFord(cost, source);

    return 0;
}
