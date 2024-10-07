#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coins[n], supply[n];
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }

    for(int i=0; i<n; i++){
        cin>>supply[i];
    }

    int change;
    cin>>change;
    
    int dp[n+1][change+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=change; j++){
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<=change; j++){
            dp[i][j] = dp[i-1][j];

            for(int k=1; k<=supply[i-1] && k * coins[i-1] <= j; k++) {
                dp[i][j] += dp[i-1][j - k * coins[i-1]];
            }
        }
    }

    //print dp table
    for(int i=0; i<=n; i++){
        for(int j=0; j<=change; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Possible ways: "<<dp[n][change];
}