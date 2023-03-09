#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node* newNode(int item) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node* insert(struct node* node, int key) {
    if (node == NULL) return newNode(key);
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    return node;
}
void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct node * minValueNode(struct node* node) {
    struct node* current = node;
    
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node * maxValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;
}

struct node* successor(struct node* root, struct node* node) {
    if (node->right != NULL)
        return minValueNode(node->right);
 
    struct node* succ = NULL;
    while (root != NULL) {
        if (node->key < root->key) {
            succ = root;
            root = root->left;
        }
        else if (node->key > root->key)
            root = root->right;
        else
            break;
    }
    return succ;
}

int main() {
    struct node* root = NULL;
    int num, key,i;

    printf("Enter the number of nodes in the BST: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++) {
        printf("Enter key value for node %d: ", i+1);
        scanf("%d", &key);
        root = insert(root, key);
    }

    printf("\nInorder traversal of the BST: ");
    inorder(root);

    printf("\nMinimum value in the BST: %d", minValueNode(root)->key);
    printf("\nMaximum value in the BST: %d", maxValueNode(root)->key);

    int successorKey;
    printf("\nEnter a key value to find its successor: ");
    scanf("%d", &successorKey);
    struct node* successorNode = newNode(successorKey);
    struct node* succ = successor(root, successorNode);
    if (succ != NULL)
        printf("Successor of %d is %d", successorKey, succ->key);
    else
        printf("No successor found for %d", successorKey);
	printf("\nThe program is run by:Veer Pratap Singh(2100320120184)\n");
    return 0;
}

