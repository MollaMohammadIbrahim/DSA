 # Tree Traversal
 A binary tree can be traversed in following ways:

1. Depth First Search or DFS Traversal
    
  - Preorder Traversal
  - Inorder Traversal
  - Postorder Traversal

2. Breadth First Search or BFS Traversal or Level order Traversal
3. Boundary Traversal
4. Diagonal Traversal

<figure>
  <img src="binary_tree_traversal.png" alt="Tree Traversal">
  <figcaption>Tree Traversal</figcaption>
</figure>

### TreeNode Defininition
```
struct node {
    int data;
    struct node* left;
    struct node* right;
};
```


## Preorder Traversal
 Used to create a copy of a tree. For example, if you want to create a replica of a tree, put the nodes in an array with a pre-order traversal. Then perform an Insert operation on a new tree for each value in the array. You will end up with a copy of your original tree.
 **Root -> Left_child -> Right_Child**

```
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // First print data of node
    cout << node->data << " ";
 
    // Then recur on left subtree
    printPreorder(node->left);
 
    // Now recur on right subtree
    printPreorder(node->right);
}

```

## In-order: 
 Used to get the values of the nodes in non-decreasing order in a BST.
**Left -> Root -> Right**
```
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left child
    printInorder(node->left);
 
    // Then print the data of node
    printf("%d ", node->data);
 
    // Now recur on right child
    printInorder(node->right);
}
```

## Post-order:
 Used to delete a tree from leaf to root
**Left -> Root -> Right**
 ```
 void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // First recur on left subtree
    printPostorder(node->left);
 
    // Then recur on right subtree
    printPostorder(node->right);
 
    // Now deal with the node
    cout << node->data << " ";
}
 
 ```