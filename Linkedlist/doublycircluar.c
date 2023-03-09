#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        head->next = head;
        head->prev = head;
        return;
    }

    new_node->next = head;
    new_node->prev = head->prev;
    head->prev->next = new_node;
    head->prev = new_node;
    head = new_node;
}

void insertAtEnd(int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        head->next = head;
        head->prev = head;
        return;
    }

    new_node->prev = head->prev;
    new_node->next = head;
    head->prev->next = new_node;
    head->prev = new_node;
}

void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    head->next->prev = head->prev;
    head->prev->next = head->next;
    struct Node* temp = head;
    head = head->next;
    free(temp);
}

void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == head) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head->prev;
    head->prev = temp->prev;
    temp->prev->next = head;
    free(temp);
}

void printList() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

int main() {
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    printf("After insertion at beginning:");
    printList();
    insertAtEnd(4);
    insertAtEnd(5);
    insertAtEnd(6);
    printf("After insertion at end:");
    printList();
    deleteFromBeginning();
    deleteFromEnd();
    printf("After deletion:");
    printList();
    return 0;
}

