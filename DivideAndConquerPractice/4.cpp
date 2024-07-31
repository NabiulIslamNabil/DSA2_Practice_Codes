#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int i, int j, int key){

    if(i>=j) return -1;

    int mid = (i+j)/2;

    if(arr[mid] == key) return 1;
    else if(arr[mid]>key) binarySearch(arr, i, mid-1, key);
    else binarySearch(arr, mid+1, j, key);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int key;
    cin>>key;
    int a = binarySearch(arr, 0, n-1, key);

    if(a!=-1) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;
}
/*
7
5 3 2 99 4 11 7
*/
