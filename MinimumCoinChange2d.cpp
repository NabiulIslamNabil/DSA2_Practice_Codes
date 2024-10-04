#include<bits/stdc++.h>

using namespace std;

int main(){
    int noOfCoins;
    cin>>noOfCoins;
    int coins[noOfCoins];
    for(int i=0; i<noOfCoins; i++){
        cin>>coins[i];
    }

    int changeAmount;
    cin>>changeAmount;

    int dp[noOfCoins][changeAmount+1] ;

    for(int i=0; i<noOfCoins; i++){
        for(int j=0; j<=changeAmount; j++){
            dp[i][0] = 0;
            if(j%coins[0]==0){
                dp[0][j] = j/coins[0];
            }else{
                dp[0][j] = INT_MAX;
            }
        }
    }


    for(int i=1; i<noOfCoins; i++){
        for(int j=1; j<=changeAmount; j++){
            if(coins[i]>j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = min(dp[i-1][j], 1 + dp[i][j-coins[i]]);
            }
        }
    }

        for(int i=0; i<noOfCoins; i++){
            for(int j=0; j<=changeAmount; j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

    cout<<"Number of solutions: "<<dp[noOfCoins-1][changeAmount];

}