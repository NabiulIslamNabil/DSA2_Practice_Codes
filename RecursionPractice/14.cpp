#include<bits/stdc++.h>

using namespace std;

bool primeHelp(int n, int i){
    if(n==1 || n==0) return false;
    if(n==2) return true;

    if(n%i == 0) return false;
    if(i*i > n) return true;

    return primeHelp(n, i+1);

}

bool isPrime(int n){
    return primeHelp(n, 2);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The prime numbers are: "<<endl;
    for(int i=0; i<n; i++){
        if(isPrime(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
/*
8
3 2 1 6 7 5 4 8
*/

