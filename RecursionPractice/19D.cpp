#include<bits/stdc++.h>

using namespace std;

int pattern(int n){
    if(n==1) return 6;

    else return (pow(2, n)*(2*n+1)) + pattern(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<pattern(n);
}
