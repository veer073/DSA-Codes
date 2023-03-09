#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct Node* createTree() {
    int data;
    struct Node* node = NULL;

    printf("Enter data (-1 for no node): ");
    scanf("%d", &data);

    if (data == -1) {
        return NULL;
    }

    node = newNode(data);

    printf("Enter left child of %d:\n", data);
    node->left = createTree();

    printf("Enter right child of %d:\n", data);
    node->right = createTree();

    return node;
}
void preOrder(struct Node* node) {
    if (node == NULL) {
        return;
    }

    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
void inOrder(struct Node* node) {
    if (node == NULL) {
        return;
    }

    inOrder(node->left);
    printf("%d ", node->data);
    inOrder(node->right);
}
void postOrder(struct Node* node) {
    if (node == NULL) {
        return;
    }

    postOrder(node->left);
    postOrder(node->right);
    printf("%d ", node->data);
}

int main() {
    struct Node* root = NULL;
    root = createTree();
    printf("Pre-order traversal: ");
    preOrder(root);
    printf("\n");
    printf("In-order traversal: ");
    inOrder(root);
    printf("\n");
    printf("Post-order traversal: ");
    postOrder(root);
    printf("\n");

    return 0;
}

