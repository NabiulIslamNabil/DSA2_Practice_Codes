#include<bits/stdc++.h>

using namespace std;

double avgArr(int arr[], int i, int n, double sum){
    if(i==n) return sum/n;

    return avgArr(arr, i+1, n, sum+arr[i]);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"The average of the array is: "<<avgArr(arr, 0, n, 0);
}
/*
8
3 2 1 6 7 5 4 8
*/
