#include<bits/stdc++.h>

using namespace std;

int GCD(int x, int y){
    if(y==0) return x;
    else return GCD(y, x%y);
}

int LCM(int a, int b) {
    int g = GCD(a, b);
    return a*b/g ;
}


int main(){

    int x, y;

    cin>>x>>y;

    cout<<LCM(x, y);

}
