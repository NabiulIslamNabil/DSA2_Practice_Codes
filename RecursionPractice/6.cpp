#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int start, int n){
    if(start==n) return;
    cout<<arr[start]<<" ";
    return printArray(arr, start+1, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr, 0, n);
}
/*
8
3 2 1 6 7 5 4 8
*/
