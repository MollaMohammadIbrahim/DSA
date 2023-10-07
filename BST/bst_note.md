# Binary Search Tree or BST
BST is a special type of binary tree which left node is smaller thant the root node and right node is greater thant the root node.
The most importan advantage of Binary Search Tree is that it makes **search easy and faster**. Time complexity of searching is **O(h)** where h is the height of the tree.
A binary search tree does not contain **duplicates.**
**Inorder Traversal** of a BST is a **sorted sequence**.
**Stratigies:** Most of the bst problems follow dividing the whole problem into sub problems. So we will forllow **Recursion** techniques for most of the problems.

## Properties of Binary Search Tree
 Binary Search Tree (BST) is a special binary tree that has the properties:

- The left subtree contains only the keys which are lesser than the key of the node.
- The right subtree contains only the keys which are greater than the key of the node.
- The left and right subtree both should be binary search tree.

 ## Applications of Binary Search Trees (BSTs):

BSTs find extensive applications in various domains:

- **Indexing**: Used in databases for efficient data retrieval.

- **Searching Algorithms**: Form the backbone of algorithms like Binary Search, which is widely employed for fast searching.

- **Data Structures Implementation**: BSTs serve as the basis for implementing structures like sets and maps.

- **Decision Support Systems**: Provide quick data retrieval in decision-making systems.

- **Computer Simulations**: Store and retrieve data rapidly in simulations.

- **Autocomplete Systems**: Enable fast suggestions in applications.

- **Decision Trees in AI/ML**: Employed to model decisions and predictions in areas like medical diagnosis, finance, and marketing.

- **Encryption Algorithms (e.g., RSA)**: BSTs play a role in generating public and private keys for secure communication.

- **Data Compression**: Utilized for compressing data, optimizing storage, and transmission efficiency.

## Real-time Applications:

- **Database Indexing**: Enhances data retrieval speed in databases.

- **Searching Algorithms**: Forms the core of search operations in various applications.

- **Huffman Coding Algorithm**: Used in data compression techniques.

- **Dictionaries**: Implementations for efficient word lookup.

- **Data Caching**: Facilitates quick access to frequently used data.

- **Priority Queues**: Used in scheduling tasks with priority.

- **Spell Checkers**: Employed in applications for spelling and grammar correction.

## Advantages of Binary Search Trees:

- **Efficient Operations**: Fast insertion and deletion (O(log n)) when balanced.

- **Quick Searching**: Offers speedy search operations (O(log n)).

- **Efficient Memory Usage**: Requires minimal memory for pointers or additional structures.

- **Range Queries**: Can efficiently find keys within a specified range.

- **Simplicity**: Code implementation is relatively straightforward.

- **Automatic Sorting**: Elements are automatically stored in sorted order.

- **Flexibility**: Easily adaptable for additional functionalities or data.

## Disadvantages of Binary Search Trees:

- **Balancing Requirement**: Need to maintain balance for optimal performance; unbalanced trees can lead to degraded operations.

- **Random Access Limitations**: Not ideal for random access operations, compared to other data structures like arrays or hash tables.

- **Potential for Degeneration**: In worst cases, can degenerate into linear search (O(n)).

- **Limited Supported Operations**: Some operations possible with ordered data structures may not be supported.

- **No Guarantee of Balance**: Not guaranteed to remain balanced, leading to potentially poor performance.

# Operations in Binary Search Tree
 - Making a node
 - Insertion 
 - Traversal
 - Deletion 
 - Searching

## Making a node
 ```
 struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    // constructor
    TreeNode (int value):val(value),left(nullptr),right(nullptr) {}

};
 
 ```

 ## Insertion into the tree:
- Check the value to be inserted (say X) with the value of the current node (say val) we are in:
    - If X is less than val move to the left subtree.
    - Otherwise, move to the right subtree.
    - Once the leaf node is reached, insert X to its right or left based on the relation between X and the leaf node’s value.

## Traversing the tree
We can traverse the tree in inorder, postorder and preorder traversal technique. Here the in order traversal **(left, root, right)** will give you a sorted sequence of the values in **increasing order** and  inorder traversal **(right,root, left)** will give you a sorted sequence of the values in **decreasing order**.
## Searching
[GeeksforGeeks](https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/)
## Deletion 
[Deletiion](https://www.geeksforgeeks.org/deletion-in-binary-search-tree/)
Deletion in bst is little complicated. While deleting, we have to consider three cases:
The deleting node may be:
1. Leaf Node
2. Has one child node
3. has two child / parent node
### Deleting Leaf Node
    1. Delete the node
    2. Return null
### One child node
    1. Delete the node
    2. Replace the node with child
### Two child nodes
    1. Replace value with inorder successor **(Left most node in right subtree)**. It means replacing with the lowest value in the right subtree.
    2. Delete the inorder successor node and return;
**N.B: Inorder successor alway have 0 child or 1 child**