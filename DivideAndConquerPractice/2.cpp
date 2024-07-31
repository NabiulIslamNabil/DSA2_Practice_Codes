#include<bits/stdc++.h>

using namespace std;

int power(int x, int y){
    if(y==0) return 1;

    int m = power(x, y/2);
    if(y%2==0) return m*m;
    else return x*m*m;
}

int main(){
    int x, y;

    cin>>x>>y;

    cout<<power(x, y);
}
