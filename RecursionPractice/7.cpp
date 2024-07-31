#include<bits/stdc++.h>

using namespace std;

void printRev(int arr[], int n){
    if(n<0) return;
    cout<<arr[n]<<" ";
    printRev(arr, n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printRev(arr, n-1);
}

/*
8
3 2 1 6 7 5 4 8
*/
