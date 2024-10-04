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

int main(){
    initialize();
    int n;
    cin>>n;

    edge e[n];

    for(int i=0; i<n; i++){
        cin>>e[i].startVertex>>e[i].endVertex;
        unionByRank(e[i].startVertex, e[i].endVertex);
    }

    int a, b;
    cin>>a>>b;

    if(findParent(a)==findParent(b)){
        cout<<"Same"<<endl;
    }else{
        cout<<"Different"<<endl;
    }
}