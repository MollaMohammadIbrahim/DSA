#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s, int start, int end) {
    if(start>=end)return true;
    if(s[start] == s[end]){
        return isPallindrome(s, ++start, --end);
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    cout<<isPallindrome(s, 0, s.size()-1)<<endl;
}