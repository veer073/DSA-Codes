#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

int countleafNodes(struct TreeNode *root){
	if(root==NULL)
		return 0;
	else if(root->left==NULL && root->right==NULL)
		return 1;
	else	
		return  countleafNodes(root->left)+countleafNodes(root->right);
		
}

int main()
{
	struct TreeNode n1={1,NULL,NULL};
	struct TreeNode n2={2,NULL,NULL};
	struct TreeNode n3={3,&n1,&n2};
	struct TreeNode n4={4,NULL,NULL};
	struct TreeNode root={5,&n3,&n4};
	
	printf("Number of nodes in the tree: %d\n", countleafNodes(&root));
	return 0;
}
