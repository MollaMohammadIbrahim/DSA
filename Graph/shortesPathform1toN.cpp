#include<bits/stdc++.h>
using namespace std;
int minimumStep(int n){
        cout<<n<<endl;
        int level = 0;
        unordered_map<long long int,bool> vis;
        queue<long long int>q;
        int cnt=0;
        
        q.push(1);
        bool flag = true;
        //cout<<q.empty()<<endl;
        while(flag){
            cout<<"new loop "<<++cnt<<" "<<n<<endl;
            
            int l = q.size();
            // cout<<" size of the queue: "<<l<<endl;
            // cout<<" Elements on que: ";
            for(int i=0;i<l; i++){
                long long int node = q.front();q.pop();
                //cout<<node<<" ";
                if(node == n){
                   printf("node = %d and n = %d",node,n);
                    flag = false;
                    return level;
                    break;
                }
                if(vis[node]==false){
                    
                    vis[node]=true;
                    if(vis[node+1] == false) q.push(node+1);
                    if(vis[node*3] == false) q.push(node*3);
                }
                
            }
            
            level++;
        }
        return level-1;
    }

int main(){
    int n = 100000;
    cout<<"\nMinimum step "<<minimumStep(n)<<endl;
}