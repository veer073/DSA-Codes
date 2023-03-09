#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

int countNodes(struct TreeNode *root){
	if(root==NULL)
		return 0;
	return 1+ countNodes(root->left)+countNodes(root->right);
		
}

int main()
{
	struct TreeNode n1={1,NULL,NULL};
	struct TreeNode n2={2,NULL,NULL};
	struct TreeNode n3={3,&n1,&n2};   
	struct TreeNode n4={4,NULL,NULL};
	struct TreeNode root={5,&n3,&n4};
	
	printf("Number of nodes in the tree: %d\n", countNodes(&root));
	return 0;
}
