#include<bits/stdc++.h>

using namespace std;

int sumArray(int arr[], int n){
    if(n==0) return arr[n];
    else return arr[n]+sumArray(arr, n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The sum of the array is: "<<sumArray(arr, n-1);
}

/*
8
3 2 1 6 7 5 4 8
*/
