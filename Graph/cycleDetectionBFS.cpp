class Graph {

public:
    bool detectCycle(int V, vector<int> adj[]) {
       vector<bool>vis(V+1,false);
       queue<pair<int,int>> q;
       q.push({1,-1});
       vis[1]=true;

       while(!q.empty()){
           int node = q.front().first;
           int parent = q.front().second;
           q.pop();

           for(int adjNode:adj[node]){
               if(vis[adjNode]==false){
                   vis[adjNode]=true;
                   q.push({adjNode,node});
               }
               // if the node is visited and there is no cycle, then the adjacent node and parent of the node must be same
               else if(adjNode != parent){
                   return true;
               }
           }
       }
       return false;

    }
};