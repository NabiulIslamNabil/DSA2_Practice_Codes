#include<bits/stdc++.h>

using namespace std;

bool isFound(int arr[], int x, int l, int h){
    if(l>h){
        return false;
    }
    int mid = (l+h)/2;
    if (arr[mid] == x) {
        return true;
    }else if(arr[mid]>x){
        isFound(arr, x, l, mid-1);
    }else{
        isFound(arr, x, mid+1, h);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cin>>x;

    if(isFound(arr, x, 0, n-1)){
        cout<<x<<" is found"<<endl;
    }else{
        cout<<x<<" is not found"<<endl;
    }
}
