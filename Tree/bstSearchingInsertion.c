#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *insert(struct node *node, int data)
{
	if(node==NULL)
		return newnode(data);
	if(data<node->data)
		node->left=insert(node->left,data);	
	else if(data>node->data)
		node->right=insert(node->right,data);	
	return node;		
}

void inorder(struct node *root)
{
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
