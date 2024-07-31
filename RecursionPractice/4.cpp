#include<bits/stdc++.h>

using namespace std;

string process(string str){
    string s;
    int i=0;
    while(str[i]!= '\0'){
        if(str[i]!=' '){
            if(str[i]>='A' && str[i]<='Z'){
                s+=str[i]+32;
            }else{
                s+=str[i];
            }
        }
        i++;
    }
    return s;
}


bool isPalindrome(string str, int i, int len){
    if(i>=len) return true;

    if(str[i]!=str[len]) return false;

    return isPalindrome(str, i+1, len-1);
}

int main(){
    string str;

    getline(cin, str);
    //cout<<str<<endl;
    str = process(str);
    //cout<<str<<endl;

    if(isPalindrome(str, 0, str.length()-1)){
        cout<<str<<" is palindrome"<<endl;
    }else{
        cout<<str<<" is not a palindrome"<<endl;
    }
}
