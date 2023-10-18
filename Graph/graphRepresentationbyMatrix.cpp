#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; //n is the number of nodes and m is the number of edges

    int adj[n+1][n+1]; // this is the adjacency matrix
    int u, v; // u,v are two adjacent nodes
    for(int i=0; i<m; i++){
        cin>>u>>v;     // cin>> weight if it is a weighted graph
        adj[u][v]=1; // if it is a weighted graph then assign weight to it instead of 1
        adj[v][u]=1; // if the graph is not directed or bidirected
    }

}