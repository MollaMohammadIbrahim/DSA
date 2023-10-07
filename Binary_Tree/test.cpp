if(root_index-1<0 and inorder[root_index+1] == INT_MIN )
                {  
                index.pop();    roots.pop();  
                root = roots.top();
                root_index = index.top(); 
                 } 
        else  if(root_index+1>=len and inorder[root_index-1] ==INT_MIN)
                {  
                    index.pop();   
                    roots.pop();    
                    //continue;
                    root = roots.top();
                    root_index = index.top(); 
                }
        else if (root_index-1>=0 and root_index+1<len and inorder[root_index-1]==INT_MIN and inorder[root_index+1]==INT_MIN){
                    index.pop();   
                    roots.pop();    
                    //continue;
                   
                    root = roots.top();
                    root_index = index.top(); 
        }
cout<<"dkaldflk";