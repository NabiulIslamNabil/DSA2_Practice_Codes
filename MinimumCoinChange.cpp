#include<bits/stdc++.h>
using namespace std;
int main(){
    int noOfCoins;
    cin>>noOfCoins;
    int coins[noOfCoins];

    for(int i=0; i<noOfCoins; i++){
        cin>>coins[i];
    }

    int change;
    cin>>change;

    int dp[noOfCoins][change+1];

    for(int i=0; i<noOfCoins; i++){
        for(int j=0; j<=change; j++){
            if(j==0) dp[i][j] = 0;
            else if(j%coins[i]==0){
                dp[0][j] = j/coins[i];
            }else{
                dp[i][j] = INT_MAX;
            }
        }
    }

    for(int i=1; i<noOfCoins; i++){
        for(int j=1; j<=change; j++){
            if(coins[i]>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-coins[i]]);
            }
        }
    }

    for(int i=0; i<noOfCoins; i++){
        for(int j=0; j<=change; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Minimum number of coins to return: "<<dp[noOfCoins-1][change];

}