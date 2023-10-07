#include<bits/stdc++.h>
using namespace std;

string decimal2binary(int n){
    if(n/2 == 0) {
        return to_string(n);
    }
    return  decimal2binary(n/2)+to_string(n%2);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)cout<<i<<" "<<decimal2binary(i)<<endl;
}