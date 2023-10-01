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
int main(){

	append(1);
	append(2);
	append(6);
	print();
    return 0;
}