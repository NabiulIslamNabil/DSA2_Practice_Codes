#include<bits/stdc++.h>

using namespace std;

int reversed(int n, int rev){
    if(n==0) return rev;
    rev = rev*10 + n%10;
    return reversed(n/10, rev);
}

bool isPalindrome(int n){
    int rev = reversed(n, 0);

    return rev == n;
}

int main(){
    int n;

    cin>>n;

    if(isPalindrome(n)){
        cout<<n<<" is a palindrome number. "<<endl;
    }else{
        cout<<n<<" is not a palindrome number. "<<endl;
    }
}
