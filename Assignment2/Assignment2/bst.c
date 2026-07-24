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

TreeNode* searchNode(TreeNode* root, char value)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->data == value)
	{
		return root;
	}

	if (value < root->data)
	{
		return searchNode(root->left, value);
	}
	else
	{
		return searchNode(root->right, value);
	}
}
void printInOrder(TreeNode* root)
{
	if (root != NULL)
	{
		printInOrder(root->left);
		printf("%c ", root->data);
		printInOrder(root->right);
	}
}
int countNodes(TreeNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}