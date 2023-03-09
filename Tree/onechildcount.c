#include<stdio.h>
#include<stdlib.h>
struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	
};
int countNodes(struct TreeNode* root)
{
	if(!root)
	return 0;
	int count=0;
	if(root->left&&!root->right)
	count++;
	
	count+=countNodes(root->left);
	count+=countNodes(root->right);
	return count;
}
int main()
{
	struct TreeNode n1={1,NULL,NULL};
	struct TreeNode n2={2,NULL,NULL};
	struct TreeNode n3={3,&n1,&n2};
	struct TreeNode n4={4,NULL,NULL};
	struct TreeNode root={5,&n3,NULL};
					
	printf("Number of  child nodes with 1 child: %d\n",countNodes(&root));
	return 0;
}
