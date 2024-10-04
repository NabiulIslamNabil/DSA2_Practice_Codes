#include<bits/stdc++.h>

using namespace std;

//top down approach
int fib(int n, int memo[]){
    if(memo[n]!=-1) return memo[n];
    if(n==0 || n==1) return n;
    
      memo[n] = fib(n - 2, memo) + fib(n - 1, memo);
      return memo[n];
      
}

//bottom up approach
int fibonacci(int n){
  int arr[n+1];
  arr[0] = 0;
  arr[1] = 1;
  for(int i=2; i<=n; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }
  return arr[n];

}

int main(){
  int n;
  cin>>n;
  int memo[n+1];
  for(int i=0; i<=n; i++){
    memo[i] = -1;
  }
  //cout<<fib(n, memo);
  cout<<fibonacci(n);
}