#include<bits/stdc++.h>

using namespace std;

bool primeHelp(int n, int i){

    if(n==1 || n==0) return false;
    if(n==2) return true;

    if(n%i==0) return false;
    if(i*i>n) return true;

    return primeHelp(n, i+1);
}

bool isPrime(int n){
    return primeHelp(n, 2);
}

int count1dPrime(vector<int> &arr, int col, int i, int count){
    if(i==col) return count;

    if(isPrime(arr[i])) count++;

    return count1dPrime(arr, col, i+1, count);
}

int count2dPrime(vector<vector<int>> arr, int row, int col, int i, int count){
    if(i==row) return count;

    count += count1dPrime(arr[i], col, 0, 0);

    return count2dPrime(arr, row, col, i+1, count);
}

int main(){

    int row, col;
    cin>>row>>col;

    vector<vector<int>> arr(row, vector<int>(col));

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"There are "<<count2dPrime(arr, row, col, 0, 0)<<" prime numbers in the 2d grid"<<endl;
}
