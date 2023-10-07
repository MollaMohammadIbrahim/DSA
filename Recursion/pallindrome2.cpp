#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s) {
    if(s.size()<=1)return true;
    if(s[0] == s[s.length()-1]){
        return isPallindrome(s.substr(1, s.length()-2));
    }
    return false;
}

int main(){
    string s;
    s = "kayak";
    cout<<isPallindrome(s)<<endl;
}