# Basic Operations on Link List

1. **Insertion** − Adds an element at the beginning of the list.

2. **Deletion** − Deletes an element at the beginning of the list.

3. **Display** − Displays the complete list.

4. **Search** − Searches an element using the given key.

5. **Delete** − Deletes an element using the given key

## Insertion

```
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
```
#  Finding Middle of the linked list using first and slow pointer

```
Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
```
# Reversing The Link list
```
ListNode* reverseList(ListNode* head) {
       ListNode *curr=head, *prev = NULL, *nxt, *temp;

       while(curr!=NULL){
           temp = curr->next;
           curr->next = prev;
           prev = curr;
           curr = temp;
       }
       curr = prev; // It prevents some unwanted runtime error
       return prev;
    }
```
