#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* push(Node* top, int data) {
    Node* newNode = createNode(data);
    newNode->next = top;
    top = newNode;
    return top;
}

Node* pop(Node* top) {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return top;
    }
    Node* temp = top;
    top = top->next;
    free(temp);
    return top;
}

void display(Node* top) {
    if (top == NULL) {
        printf("Stack is Empty\n");
        return;
    }
    Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
	printf("The program is completed by : Veer Pratap Singh(2100320120184)\n\n");
    Node* top = NULL;
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    printf("After Pushing the values:");
    display(top);
    printf("After deletion from the top:");
    top = pop(top);
    display(top);
    return 0;
}

