#include<bits/stdc++.h>

using namespace std;

int power(int x, int y){
    if(y==0) return 1;
    return x*power(x, y-1);
}

int main(){
    int x, y;
    cin>>x>>y;

    cout<<x<<" to the power "<<y<<" is: "<<power(x, y);
}
