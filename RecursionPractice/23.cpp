#include<bits/stdc++.h>

using namespace std;

int sumDigits(int n){
    if(n==0) return 0;

    return n%10 + sumDigits(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum of digits: "<<sumDigits(n);
}
