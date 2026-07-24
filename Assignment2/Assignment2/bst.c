#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

TreeNode* insertNode(TreeNode* root, char value)// Function to insert a node into the binary search tree
{
	if (root == NULL)// If the tree is empty, create a new node
	{
		TreeNode* newNode =
			(TreeNode*)malloc(sizeof(TreeNode));// Allocate memory for a new node

		if (newNode == NULL)// Check if memory allocation was successful
		{
			printf("Memory allocation failed.\n");// Print an error message
			return NULL;// Return NULL if memory allocation failed
		}

		newNode->data = value;// Set the data of the new node
		newNode->left = NULL;// Set the left child of the new node to NULL
		newNode->right = NULL;//Set the right child of the new node to NULL

		return newNode;// Return the new node
	}

	if (value < root->data)// If the value is less than the root's data, insert it in the left subtree
	{
		root->left = insertNode(root->left, value);// Recursively insert the value in the left subtree
	}
	else
	{
		root->right = insertNode(root->right, value);// Recursively insert the value in the right subtree
	}

	return root;// Return the root of the tree
}

#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

TreeNode* insertNode(TreeNode* root, char value)// Function to insert a node into the binary search tree
{
	if (root == NULL)// If the tree is empty, create a new node
	{
		TreeNode* newNode =
			(TreeNode*)malloc(sizeof(TreeNode));// Allocate memory for a new node

		if (newNode == NULL)// Check if memory allocation was successful
		{
			printf("Memory allocation failed.\n");// Print an error message
			return NULL;// Return NULL if memory allocation failed
		}

		newNode->data = value;// Set the data of the new node
		newNode->left = NULL;// Set the left child of the new node to NULL
		newNode->right = NULL;//Set the right child of the new node to NULL

		return newNode;// Return the new node
	}

	if (value < root->data)// If the value is less than the root's data, insert it in the left subtree
	{
		root->left = insertNode(root->left, value);// Recursively insert the value in the left subtree
	}
	else
	{
		root->right = insertNode(root->right, value);// Recursively insert the value in the right subtree
	}

	return root;// Return the root of the tree
}

TreeNode* searchNode(TreeNode* root, char value)// Function to search for a node in the binary search tree
{
	if (root == NULL)// If the tree is empty or the value is not found, return NULL
	{
		return NULL;// Return NULL if the tree is empty or the value is not found
	}

	if (root->data == value)// If the value is found, return the node
	{
		return root;// Return the node if the value is found
	}

	if (value < root->data)// If the value is less than the root's data, search in the left subtree
	{
		return searchNode(root->left, value);// Recursively search for the value in the left subtree
	}
	else
	{
		return searchNode(root->right, value);// Recursively search for the value in the right subtree
	}
}
void printInOrder(TreeNode* root)// Function to print the binary search tree in order
{
	if (root != NULL)// If the tree is not empty, print the left subtree, the root, and the right subtree
	{
		printInOrder(root->left);// Recursively print the left subtree
		printf("%c ", root->data);// Print the root's data
		printInOrder(root->right);// Recursively print the right subtree
	}
}
int countNodes(TreeNode* root)// Function to count the number of nodes in the binary search tree
{
	if (root == NULL)// If the tree is empty, return 0
	{
		return 0;// Return 0 if the tree is empty
	}

	return 1 + countNodes(root->left) + countNodes(root->right);// Return 1 (for the root) plus the number of nodes in the left and right subtrees
}
int treeHeight(TreeNode* root)// Function to calculate the height of the binary search tree
{
	int leftHeight;// Variable to store the height of the left subtree
	int rightHeight;// Variable to store the height of the right subtree

	if (root == NULL)// If the tree is empty, return 0
	{
		return 0;// Return 0 if the tree is empty
	}

	leftHeight = treeHeight(root->left);// Recursively calculate the height of the left subtree
	rightHeight = treeHeight(root->right);// Recursively calculate the height of the right subtree

	if (leftHeight > rightHeight)// If the height of the left subtree is greater than the height of the right subtree, return 1 plus the height of the left subtree
	{
		return 1 + leftHeight;// Return 1 plus the height of the left subtree
	}
	else
	{
		return 1 + rightHeight;// Return 1 plus the height of the right subtree
	}
}