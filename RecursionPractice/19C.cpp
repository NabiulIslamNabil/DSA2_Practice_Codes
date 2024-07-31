#include<bits/stdc++.h>

using namespace std;

int pattern(int n, int i){
    if(i==n) return i*(2*i+1);

    else return i*(2*i+1) + pattern(n, i+1);
}

int main(){
    int n;
    cin>>n;

    cout<<pattern(n, 1);
}
