#include<bits/stdc++.h>

using namespace std;

int find1dMax(vector<int> &arr, int max, int col, int i){

    if(i==col) return max;

    if(arr[i]>max) max = arr[i];

    return find1dMax(arr, max, col, i+1);
}

int find1dMin(vector<int> &arr, int min, int col, int i){

    if(i==col) return min;

    if(arr[i]<min) min = arr[i];

    return find1dMin(arr, min, col, i+1);

}

int find2dMin(vector<vector<int>> &arr, int min, int row, int col, int i){

    if(i==row) return min;

    int m = find1dMin(arr[i], min, col, 0);

    if(m<min) min = m;

    return find2dMin(arr, min, row, col, i+1);
}

int find2dMax(vector<vector<int>> &arr, int max, int row, int col, int i){

    if(i==row) return max;

    int m = find1dMax(arr[i], max, col, 0);

    if(m>max) max = m;

    return find2dMax(arr, max, row, col, i+1);
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

    int max = find2dMax(arr, arr[0][0], row, col, 0);
    int min = find2dMin(arr, arr[0][0], row, col, 0);

    cout<<"The max of the 2d array is: "<<max<<endl;
    cout<<"The min of the 2d array is: "<<min<<endl;
}
