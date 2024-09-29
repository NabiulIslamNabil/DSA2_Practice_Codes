//DIJKSTRA's ALGORITHM
#include<bits/stdc++.h>
using namespace std;

int dist[100];
bool visited[100];
int V, E;

void initialize(){
    for(int i=0; i<100; i++){
        dist[i] = INT_MAX;
        visited[i] = false;
    }
}

int findMinimum(){
    int minimum = -1;

    for(int i=0; i<V; i++){
        if(!visited[i] && (minimum==-1 || dist[i]<dist[minimum])){
            minimum = i;
        }
    }

    return minimum;
}

void dijkstra(int cost[][100], int source){
    dist[source] = 0;

    for(int i=0; i<V; i++){
        int u = findMinimum();
        visited[u] = true;

        for(int v = 0; v < V; v++){
            if(!visited[v] && cost[u][v]!=0){
                if(dist[v]> dist[u]+cost[u][v]){
                    dist[v] = dist[u]+cost[u][v];
                }
            }
        }
    }

    //print
    for(int i = 0; i<V; i++){
        if(dist[i] == INT_MAX){
            cout<<i<<" is unreachable from the source."<<endl;
        }else{
            cout<<i<<" "<<dist[i]<< endl;
        }
    }
}

int main(){
    
    cout<<"Enter the number of vertex: ";
    cin>>V;

    cout<<"Enter the number of edges: ";
    cin>>E;

    int cost[100][100];
    
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            cost[i][j] = 0;
        }
    }

    initialize();

    for(int i=0; i<E; i++){
        int u, v, weight;
        cout<<"Enter start node, end node and weight: ";
        cin>>u>>v>>weight;
        cost[u][v] = weight; //for directional graph
        cost[v][u] = weight; //for bidirectional graph
    }

    int source;
    cin>>source;

    dijkstra(cost, source);
}