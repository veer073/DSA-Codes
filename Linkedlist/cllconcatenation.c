#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE* create_list(NODE *last);
void display(NODE *last);
NODE* concatenate(NODE *last1, NODE *last2);

int main() {
    NODE *last1 = NULL, *last2 = NULL;
    printf("Enter elements in first circular linked list:\n");
    last1 = create_list(last1);
    printf("First circular linked list:\n");
    display(last1);
    printf("Enter elements in second circular linked list:\n");
    last2 = create_list(last2);
    printf("Second circular linked list:\n");
    display(last2);
    last1 = concatenate(last1, last2);
    printf("Concatenated circular linked list:\n");
    display(last1);
    return 0;
}

NODE* create_list(NODE *last) {
    int n, i;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    if (n == 0) {
        return last;
    }
    NODE *temp;
    for (i = 0; i < n; i++) {
        temp = (NODE *)malloc(sizeof(NODE));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &temp->data);
        if (last == NULL) {
            last = temp;
            temp->next = last;
        }
        else {
            temp->next = last->next;
            last->next = temp;
            last = temp;
        }
    }
    return last;
}

void display(NODE *last) {
    NODE *p;
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }
    p = last->next;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != last->next);
    printf("\n");
}

NODE* concatenate(NODE *last1, NODE *last2) {
    if (last1 == NULL) {
        last1 = last2;
        return last1;
    }
    if (last2 == NULL) {
        return last1;
    }
    NODE *p;
    p = last1->next;
    last1->next = last2->next;
    last2->next = p;
    last1 = last2;
    return last1;
}

