#include<bits/stdc++.h>

using namespace std;

int MaxArr(int arr[], int i, int j){

    if(i==j) return arr[i];
    int mid = (i+j)/2;
    int m1 = MaxArr(arr, i, mid);
    int m2 = MaxArr(arr, mid+1, j);

    if(m1>m2) return m1;
    else return m2;
}

int MinArr(int arr[], int i, int j){

    if(i==j) return arr[i];
    int mid = (i+j)/2;
    int m1 = MinArr(arr, i, mid);
    int m2 = MinArr(arr, mid+1, j);

    if(m1<m2) return m1;
    else return m2;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<"Max: "<<MaxArr(arr, 0, n-1)<<endl;
    cout<<"Min: "<<MinArr(arr, 0, n-1)<<endl;
}

/*
7
5 3 2 99 4 11 7
*/
