#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

void insert_at_beginning(int value) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->prev = NULL;
    new_node->next = head;
    if (head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
}

void insert_at_end(int value) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL) {
        new_node->prev = NULL;
        head = new_node;
        return;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    new_node->prev = current;
}

void delete_from_beginning() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
}

void delete_from_end() {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->prev->next = NULL;
    free(current);
}

void display() {
    struct Node* current = head;
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("\n\nThe contents of the list are:\n");
    while (current != NULL) {
        printf("%d  ", current->data);
        current = current->next;
    }
}

int main() {
    insert_at_beginning(1);
    insert_at_end(2);
    insert_at_end(3);
    insert_at_beginning(6);
    insert_at_beginning(67);
    insert_at_beginning(87);
    insert_at_end(69);
    display();
    printf("\n\nAfter deleting from beginning ");
    delete_from_beginning();
    display();
    printf("\n\nAfter deleting from End ");
    delete_from_end();
    display();
    return 0;
}

