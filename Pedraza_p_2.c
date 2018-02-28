#include <stdio.h>
#include <stdlib.h>

/* 
A binary tree node has data, pointer to left child
   and a pointer to right child 
   Source code provided by Thomas Pedraza
   I have abided by the UNCG academic integrity policy
*/
struct node
{
     // create a new integer node with left and right child pointers
	int data;
	struct node *left;
	struct node *right;
};

/* function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* initNode(int data)
{
	struct node* node = malloc(sizeof(struct node));
	
	//Integer assignment and left & right child to null
	node -> data = data;
	node -> left = NULL;
	node -> right = NULL;
	
	return(node);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
	printf("%d\n", (int) node -> data);
	if(node -> left != NULL) {
		printPreorder(node -> left);
	}
	if(node -> right != NULL) {
		printPreorder(node -> right);
	}

	return;
}

/* Main function*/
int main()
{
    // Create the structure of the tree with pre-defined values
     struct node *root  = initNode(1); //root
     root->left             = initNode(2); //left child
     root->right           = initNode(3); //right child
     root->left->left     = initNode(4);
     root->left->right   = initNode(5);

     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);

     getchar();
     return 0;
}
