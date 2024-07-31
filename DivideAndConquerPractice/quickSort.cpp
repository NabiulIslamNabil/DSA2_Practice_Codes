#include<bits/stdc++.h>

using namespace std;

int partitionArr(int arr[], int p, int r){

    int x = arr[r];
    int i = p-1;

    for(int j=p; j<r; j++){
        if(arr[j]<=x){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);

    return i+1;
}

void quickSort(int arr[], int p, int r){
    if(p<r){
        int q = partitionArr(arr, p, r);
        quickSort(arr, p, q-1);
        quickSort(arr, q+1, r);
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";

}
/*
7
5 3 2 99 4 11 7
*/
