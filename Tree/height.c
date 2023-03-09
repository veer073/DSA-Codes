#include<stdio.h>
#include<stdlib.h>
struct Node{

    int data;
    struct Node* left;
    struct Node* right;
};
int max(int a, int b){
    return (a>b) ? a : b; 
}
int height(struct Node* node){
    if(node == NULL){
        return 0;
    }
    return 1+ max(height(node->left), height(node->right));
}

struct Node* newNode(int data){
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main(){
    struct Node *root = newNode(20);
	root->left =  newNode(50);
	root->right =  newNode(90);
	root->left->left =  newNode(25);
	root->left->right =  newNode(67);
	//root->left->right->left =  newNode(99);
	printf("heigth of node is %d", height(root));


}
