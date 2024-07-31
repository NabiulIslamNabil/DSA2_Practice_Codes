#include<bits/stdc++.h>

using namespace std;

int pattern(int n, int i){
    if(i==n) return n*n;

    else return i*i + pattern(n, i+1);
}

int main(){
    int n;
    cin>>n;

    cout<<pattern(n, 1);
}
