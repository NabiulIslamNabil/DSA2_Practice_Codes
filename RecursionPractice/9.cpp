#include<bits/stdc++.h>

using namespace std;

int productArr(int arr[], int n){
    if (n==0) return arr[n];
    else return arr[n]*productArr(arr, n-1);
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The product of the array is: "<<productArr(arr, n-1);
}
/*
5
3 6 1 2 4
*/
