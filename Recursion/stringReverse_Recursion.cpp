#include<bits/stdc++.h>
using namespace std;

string reverse_string(string s){
    if (s=="") return "";
    return reverse_string(s.substr(1,s.size()-1))+s[0];
}

int main(){
    string s;
    cin>>s;
    string rs = reverse_string(s);
    cout<<rs<<endl;
}