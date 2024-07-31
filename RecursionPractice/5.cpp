#include<bits/stdc++.h>

using namespace std;

void printEven(int x, int y){
    if(x==y) {
        if(x%2==0) cout<<x<<" ";
        return;
    }
    if(x%2==0) cout<<x<<" ";

    return printEven(x+1, y);
}

int main(){
    int x, y;

    cin>>x>>y;

    printEven(x, y);
}
