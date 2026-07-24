#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bst.h"

int main(void)// Main function
{
	TreeNode* root = NULL;// Initialize the root of the binary search tree to NULL
	int numberOfLetters;// Variable to store the number of random letters to generate
	int i;// Variable for loop iteration
	char randomLetter;// Variable to store the randomly generated letter

	srand((unsigned int)time(NULL));// Seed the random number generator with the current time

	numberOfLetters = 11 + rand() % 10;// Generate a random number between 11 and 20

	printf("Number of random letters: %d\n", numberOfLetters);// Print the number of random letters to be generated
	printf("Generated letters: ");// Print the generated letters

	for (i = 0; i < numberOfLetters; i++)// Loop to generate random letters
    {
		randomLetter = 'a' + rand() % 26;// Generate a random letter between 'a' and 'z'

		printf("%c ", randomLetter);// Print the generated letter

		root = insertNode(root, randomLetter);// Insert the generated letter into the binary search tree
    }

	printf("\n");// Print a newline after the generated letters

	printf("\nLetters in alphabetical order:\n");// Print the letters in alphabetical order by performing an in-order traversal of the binary search tree
	printInOrder(root);// Print the letters in alphabetical order

	printf("\n\nNumber of nodes: %d\n", countNodes(root));// Print the number of nodes in the binary search tree
	printf("Tree height: %d\n", treeHeight(root));// Print the height of the binary search tree

	freeTree(root);// Free the memory allocated for the binary search tree

    return 0;
}