#include<bits/stdc++.h>

using namespace std;

int parent[1000];
int ranks[1000];

void initialize(){
    for(int i=0; i<1000; i++){
        parent[i] = i;
        ranks[i] = 0;
    }
}

struct edge{
    int startVertex;
    int endVertex;
    int weight;
};

int findParent(int vertex){
    if(vertex == parent[vertex]) return vertex;
    else return parent[vertex] = findParent(parent[vertex]);
}

void unionByRank(int start, int end){
    int x = findParent(start);
    int y = findParent(end);

    if (ranks[x]>ranks[y]){
        parent[y] = x;
    }

    else if (ranks[x]<ranks[y]){
        parent[x] = y;
    }

    else{
        parent[y] = x;
        ranks[x] = ranks[x]+1;
    }
}

bool compareWeight(edge u, edge v){
    return u.weight<v.weight;
}

int main(){
    initialize();
    int n;
    cin>>n;
    edge e[n]; 
    int minWeight = 0;
    for(int i=0; i<n; i++){
        cin>>e[i].startVertex>>e[i].endVertex>>e[i].weight;
    }
    sort(e, e+n, compareWeight);

    cout<<"Spanning Tree: "<<endl;
    for(int i=0; i<n; i++){
        if(findParent(e[i].startVertex)!=findParent(e[i].endVertex)){
            unionByRank(e[i].startVertex, e[i].endVertex);
            cout<<e[i].startVertex<<" "<<e[i].endVertex<<endl;
            minWeight += e[i].weight;
        }
    }

    cout<<"The minimum weight is: "<<minWeight;
}