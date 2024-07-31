#include<bits/stdc++.h>

using namespace std;

bool isBalanced(string str, int i, int balance){
    if(i==str.length()) return balance == 0;

    char c = str[i];

    if(c=='('){
        return isBalanced(str, i+1, balance+1);
    }else if(c==')'){
        if(balance<=0) return false;

        return isBalanced(str, i+1, balance-1);
    }else{
        isBalanced(str, i+1, balance);
    }
}

int main(){
    string str;
    getline(cin, str);

    if(isBalanced(str, 0, 0)){
        cout<<"Brackets are balanced"<<endl;
    }else{
        cout<<"Brackets are not balanced"<<endl;
    }
}
