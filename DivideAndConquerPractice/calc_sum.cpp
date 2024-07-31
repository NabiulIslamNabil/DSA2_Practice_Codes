#include<bits/stdc++.h>

using namespace std;

int calc_sum(int arr[], int i, int j){

    if(i==j) return arr[i];

    int mid = (i+j)/2;

    int left_sum = calc_sum(arr, i, mid);
    int right_sum = calc_sum(arr, mid+1, j);

    return left_sum + right_sum;
}

int main(){
    int n;

    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = calc_sum(arr, 0, n-1);

    cout<<sum<<endl;
}
