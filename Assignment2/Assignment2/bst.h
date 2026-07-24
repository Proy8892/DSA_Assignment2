#ifndef BST_H
#define BST_H

typedef struct TreeNode // Definition of a tree node
{
	char data;// Data stored in the node
	struct TreeNode* left;// Pointer to the left child
	struct TreeNode* right;// Pointer to the right child
} TreeNode;// Definition of a tree node

TreeNode* insertNode(TreeNode* root, char value);// Function to insert a node into the binary search tree
TreeNode* searchNode(TreeNode* root, char value);// Function to search for a node in the binary search tree
void printInOrder(TreeNode* root);// Function to print the binary search tree in order
int countNodes(TreeNode* root);// Function to count the number of nodes in the binary search tree
int treeHeight(TreeNode* root);// Function to calculate the height of the binary search tree
void freeTree(TreeNode* root);// Function to free the memory allocated for the binary search tree

#endif