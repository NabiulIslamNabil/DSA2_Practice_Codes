#include<bits/stdc++.h>

using namespace std;

int fibonacci(int first, int last, int n){
    if(n==0) return first;
    if(n==1) return last;
    return fibonacci(last, first+last, n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"The "<<n<<"th fibonacci number is: "<<fibonacci(0, 1, n);
}
