#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    // constructor
    TreeNode (int value):data(value),left(nullptr),right(nullptr) {}

};
TreeNode* insertion(TreeNode* root, int value){
    //case 1: if node is null
    if (root == nullptr) {
        root = new TreeNode(value);
        return root;
    }
    // case 2: if new value is less than parent value then go left
    else if(value < root->data){
        root-> left = insertion(root->left, value);
    }

    else if(value > root->data){
        root-> right = insertion(root->right, value);
    }
    return root;
}

void printInorder(TreeNode *root){
    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
  
    return;
}
TreeNode* findNode(TreeNode* root, int value) {
    //cout<<"returning top"<<endl;
    if(root == nullptr){
        //cout<<"No value found to delete"<<endl;
        return root;
    }
    if(root->data == value){
        //cout<<"Found value"<<root->data<<endl;
        return root;
    }
    else if(value < root->data){
        //cout<<"reurning from left node "<<root->data<<endl;
        return findNode(root->left, value);
    }
    else if(value> root->data){
        //cout<<"reurning from right node "<<root->data<<endl;
        return findNode(root->right, value);
    }

}
void deleteNode (TreeNode *root, int value){
    if(root == NULL)return;
    root = findNode(root, value);

    // case 1:no childe / leaf node
    if(root->right == nullptr and root-> left == nullptr){
        delete(root);
        return;
    }

    // case 2: node has no children
    if(root->right == nullptr){
        root->data = root->left->data;
        delete(root->left);
        return;
    }
    if(root->left == nullptr){
        root->data = root->right->data;
        delete(root->right);
        return;
    }
    // case 3: parent node / node has two children
    
}



TreeNode* search(TreeNode* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
        return root;
 
    // Key is greater than root's key
    if (root->data < key)
        return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}

int main(){
    vector<int> v = {2,5,7,9,1,4,6,10};
    TreeNode *root = NULL;
    
    for(int i=0; i<v.size() ; i++){   
        root=insertion(root, v[i]);
    }
    insertion(root,8);
    insertion(root,12);
    insertion(root,18);
    
    printInorder(root);
    cout<<endl;

    cout<<findNode(root, 120)->data<<endl;
    
}