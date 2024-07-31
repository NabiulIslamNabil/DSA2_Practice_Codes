#include<bits/stdc++.h>

using namespace std;

int pattern(int n, int i, int j, int k, int run){
    if(n==run) return i*j*k;

    else return i*j*k + pattern(n, i*2, j+2, k-1, run+1);
}

int main(){
    int n;
    cin>>n;
    cout<<pattern(n, 2, 3, 4, 1);
}
