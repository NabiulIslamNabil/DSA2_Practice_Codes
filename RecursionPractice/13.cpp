#include<bits/stdc++.h>

using namespace std;

void printOdd(int arr[], int n){
    static int i=0;
    if(i==n) return;

    if(arr[i]%2 == 1) cout<<arr[i]<<" ";
    i++;

    return printOdd(arr, n);
}

void printEven(int arr[], int n){
    static int i=0;
    if(i==n) return;

    if(arr[i]%2==0) cout<<arr[i]<<" ";
    i++;
    return printEven(arr, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printOdd(arr, n);
    cout<<endl;
    printEven(arr, n);
}
/*
8
3 2 1 6 7 5 4 8
*/

