#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *root = NULL;
//appending node at the beginning or ending of the list.
void append(int data){

    //appending at the beginning the list
    if( root == NULL ){
        root = new Node();
        root->data = data;
        root->next = NULL;
    }

    //appending at the end of the list
    else{
        Node *curr_node = root;
        // searching for the last node
        while(curr_node -> next != NULL){
            curr_node = curr_node -> next;
        }

        // now create a new node
        Node *node = new Node();
        node->data = data;
        node->next = NULL;

        // add the node to the list -> add it after the current node
        curr_node -> next = node;
    }

}
void print()
{
		Node *current_node=root;
		while(current_node!=NULL) //loop until you reach null
		{
			printf("%d\n",current_node->data);
			current_node=current_node->next;
		}
}

void delete_node(int data){
    Node *curr_node, *prev_node;
    curr_node = root;
    
    //seraching for node which to be deleted
    while(curr_node -> data != data and curr_node -> next != NULL  ){
        prev_node = curr_node;
        curr_node = curr_node->next;
    }
    if(curr_node->next == NULL and curr_node->data != data){
        cout<<"No data found"<<endl;
        return;
    }
    // if current node and and root node are same then updating the root node to root -> next
    if(curr_node == root){
        cout<<"Deleted "<<curr_node->data<<endl;
        Node *temp = root;
        root = root->next;
        delete(temp);
    }
    
    // if current node is not root then update the previous node pointer to current node next pointer
    else{
        
        prev_node->next = curr_node->next;
        cout<<"Deleted "<<curr_node->data<<endl;
        delete(curr_node);
    }
}

int main(){

	append(1);
	append(2);
	append(6);
    delete_node(1);
	print();
    delete_node(2);
    print();
    delete_node(6);
    print();
    delete_node(7);
    print();
    return 0;
}