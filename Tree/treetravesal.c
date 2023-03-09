#include<stdio.h>
#include<stdlib.h>

struct node{
	char data;
	struct node *left;
	struct node *right;	
};

struct node *Makenode(char x)
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
	p->left=NULL;
	p->right=NULL;
	return p;
}

Inorder(struct node *tree)
{
	if(tree!=NULL)
	{
		Inorder(tree->left);
		printf("%c",tree->data);
		Inorder(tree->right);
	}
}

preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%c",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}

postorder(struct node *tree)
{
	if(tree!=NULL)
	{
		postorder(tree->left);
		postorder(tree->right);
		printf("%c",tree->data);
	}
}

void main()
{
	struct node *root;
	root=NULL;
	root=Makenode('A');
	root->left=Makenode('B');
	root->right=Makenode('C');
	root->left->left=Makenode('D');
	root->left->right=Makenode('E');
	
	printf("Inorder Traversal is:");
	Inorder(root);
	printf("\n\n");
	printf("postorder Traversal is:");
	postorder(root);
	printf("\n\n");
	printf("Preorder Traversal is:");
	preorder(root);
	printf("\nThe program is run by:Veer Pratap Singh(2100320120184)\n");
}
