#include<bits/stdc++.h>
using namespace std;

void printOdd(int arr[], int i, int j){
    if(i==j){
        if(arr[i]%2!=0) cout<<arr[i]<<" ";

        return;
    }

    int mid = (i+j)/2;

    printOdd(arr, i, mid);
    printOdd(arr, mid+1, j);
}

int main(){
    int n;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    printOdd(arr, 0, n-1);

}

/*
7
5 3 0 9 4 11 7
*/
