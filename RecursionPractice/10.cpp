#include<bits/stdc++.h>

using namespace std;

int maxArr(int arr[], int m, int n){
    if(n<0) return m;

    if(arr[n]>m) m = arr[n];

    return maxArr(arr, m, n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The maximum of the array is: "<<maxArr(arr, arr[n-1], n-1);

}
/*
8
3 2 1 6 7 5 4 8
*/