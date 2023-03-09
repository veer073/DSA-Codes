#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int countNodesWithTwoChildren(struct Node* node) {
    if (node == NULL) {
        return 0;
    }
    int count = 0;
    if (node->left != NULL && node->right != NULL) {
        count = 1;
    }
    return count + countNodesWithTwoChildren(node->left) + countNodesWithTwoChildren(node->right);
}

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    int count = countNodesWithTwoChildren(root);
    printf("Number of nodes with two children: %d\n", count);
    return 0;
}

