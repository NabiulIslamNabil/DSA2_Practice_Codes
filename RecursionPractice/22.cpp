#include<bits/stdc++.h>

using namespace std;

int num(int n){
    if(n==0) return 0;
    return 1+ num(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<"The number of digits: "<<num(n);
}
