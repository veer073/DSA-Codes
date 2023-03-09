 #include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
	
};

struct node *Makenode(int x)
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
		printf("%d",tree->data);
		Inorder(tree->right);
	}
}

preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d",tree->data);
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
		printf("%d",tree->data);
	}
}

CreateTree(struct node **tree)
{
	struct node *p;
	int x,choice;
	printf("Whether the left of %d exists(1/0):",(*tree->data));
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Input the Information of the left node:");
		scanf("%d",&x);
		(*tree)->left=p;
		CreateTree(&p);
	}
	printf("Whether the right of %d exists(1/0):",(*tree->data));
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Input the Information of the right node:");
		scanf("%d",&x);
		(*tree)->right=p;
		CreateTree(&p);
	}
}

void main()
{
	struct node *root;
	int x;
	printf("Enter the root node:");
	scanf("%d",&x);
	root=Makenode(x);
	CreateTree(&root);
	printf("Inorder Traversal is:");
	Inorder(root);
	printf("\n\n");
	printf("postorder Traversal is:");
	postorder(root);
	printf("\n\n");
	printf("Preorder Traversal is:");
	preorder(root);
	
}
