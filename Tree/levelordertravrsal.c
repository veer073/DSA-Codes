#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

int max(int a, int b){
	return (a>b? a : b) ;
}

int height(struct Node* node){
	if (node == NULL){
		return 0;
	}
	return 1 + max(height(node->left), height(node->right));
}

struct Node* newNode(int data){
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void print_level(struct Node* root, int level_no){
	if (!root){
		return;
	}
	if (level_no == 0){
		printf("%d -> ", root->data);
	}
	else{
		print_level(root->left, level_no -1);
		print_level(root->right, level_no -1);
	}
}

void print_tree_level_order(struct Node* root){
	int i;
	if (!root){
		return;
	}
	int height_tree =  height(root);
	for (i =0; i<height_tree; i++){
		printf("Level %d: ", i);
		print_level(root, i);
		printf("\n");
	}
	printf("\ncomplete traversal\n");
		for (i =0; i<height_tree; i++){
		print_level(root, i);
	}
	printf("\n");
}

int main(){
	struct Node *root = newNode(70);
	root->left =  newNode(2);
	root->right =  newNode(347);
	root->left->left =  newNode(44);
	root->left->right =  newNode(57);
	root->left->right->left =  newNode(614);
	printf("heigth  is %d\n", height(root));
	print_tree_level_order(root);	
}
