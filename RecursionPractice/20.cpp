#include<bits/stdc++.h>
using namespace std;

int GCD(int x, int y){
    if(y==0) return x;
    else return GCD(y, x%y);
}

int Euclid(int a, int b){
    if(a==0) return a;
    if(b==0) return b;
    if(a==b) return a;

    if(a>b) return Euclid(a-b, b);
    else return Euclid(a, b-a);
}
int main(){
    int x, y;

    cin>>x>>y;

    cout<<GCD(x,y)<<endl;

    cout<<Euclid(x, y);
}
