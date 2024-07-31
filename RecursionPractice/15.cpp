#include<bits/stdc++.h>

using namespace std;

int countEven(int arr[], int n, int count){
    static int i=0;
    if(i==n) return count;
    if(arr[i]%2==0) count++;

    i++;
    return countEven(arr, n, count);
}

int countOdd(int arr[], int n, int count){
    static int j=0;
    if(j==n) return count;
    if(arr[j]%2==1)count++;


    j++;
    return countOdd(arr, n, count);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"There are "<<countEven(arr, n, 0)<<" even numbers in the array"<<endl;
    cout<<"There are "<<countOdd(arr, n, 0)<<" odd numbers in the array"<<endl;
}
/*
8
3 2 1 6 7 5 4 8
*/
