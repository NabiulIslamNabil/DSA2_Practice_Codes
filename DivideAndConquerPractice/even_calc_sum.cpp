#include<bits/stdc++.h>

using namespace std;

int even_calc_sum(int arr[], int i, int j){

    if(i==j){
        if(arr[i]%2==0) return arr[i];

        else return 0;
    }

    int mid = (i+j)/2;

    int left_even_sum = even_calc_sum(arr, i, mid);
    int right_even_sum = even_calc_sum(arr, mid+1, j);

    return left_even_sum + right_even_sum;

}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++) cin>>arr[i];

    int sum = even_calc_sum(arr, 0, n-1);

    cout<<sum;

    return 0;
}
