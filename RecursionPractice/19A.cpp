#include<bits/stdc++.h>

using namespace std;

int pattern(int n, int i){
    if(i==n) return n;
    else return i + pattern(n, i+1);
}

int main(){
    int n;
    cin>>n;

    cout<<pattern(n, 1);
}
