class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int level = 0;
        int steps = 0;
        int X,Y;
        int x,y;
        vector <int> dx = {1,-1,0,0};
        vector <int> dy = {0,0,1,-1};
        map<pair<int,int>, int>vis;
        queue <pair<int,int>>q;
        pair<int,int>curr;

        X = maze.size()-1;
        Y = maze[0].size()-1;

        pair<int,int> entry = {entrance[0],entrance[1]};
        curr = entry;

        q.push(entry);
        vis[entry]=1;
        maze[entry.first][entry.second]='+';
        
        while(!q.empty()){
           
            int k = q.size();
           
           
            for(int i=0;i<k;i++){
                curr = q.front();q.pop();
                if(curr != entry and (curr.first == 0 or curr.first == X or curr.second == 0 or curr.second == Y)){
                    //if(q.size()==0)steps++;
                     cout<<curr.first<<" "<<curr.second<<" "<<q.size()<<endl;
                     cout<<X<<" "<<Y<<endl;
                    return steps;
                }
                 for(int i = 0; i<dx.size(); i++){
                    x = curr.first + dx[i];
                    y = curr.second + dy[i];
                   
                    if((x>=0 and x<=X and y>=0 and y<=Y)  ){                        
                        if(maze[x][y]=='.'){
                            q.push(make_pair(x,y));
                            maze[x][y]='+';
                        }

                    }
                    
                 }
            }
             steps++;
        }
                            
      
        return -1;
        
    }

    
};
