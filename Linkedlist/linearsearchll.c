#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

struct Node* linearSearch(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int main() {
	printf("This program is Made by:Veer Pratap Singh(2100320120184)\n");
    struct Node* head = NULL;
    insert(&head, 5);
    insert(&head, 10);
    insert(&head, 15);
    insert(&head, 20);
    struct Node* result = linearSearch(head, 15);
    if (result == NULL) {
        printf("Element not found\n");
    } else {
        printf("Element found: %d\n", result->data);
    }
    return 0;
}

