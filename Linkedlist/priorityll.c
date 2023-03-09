#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int priority;
    struct node* next;
};
struct queue {
    struct node* front;
};
void initQueue(struct queue* q) {
    q->front = NULL;
}
int isEmpty(struct queue* q) {
    return (q->front == NULL);
}
void enqueue(struct queue* q, int value, int priority) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = newNode;
    } else if (priority > q->front->priority) {
        newNode->next = q->front;
        q->front = newNode;
    } else {
        struct node* current = q->front;
        while (current->next != NULL && current->next->priority >= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}
int dequeue(struct queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    int value = q->front->data;
    struct node* temp = q->front;
    q->front = q->front->next;
    free(temp);

    return value;
}
void display(struct queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    struct node* current = q->front;
    printf("Queue: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct queue q;
    initQueue(&q);

    int choice, value, priority;

    while (1) {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                printf("Enter the priority of the value: ");
                scanf("%d", &priority);
                enqueue(&q, value, priority);
                break;

            case 2:
                value = dequeue(&q);
                if (value != -1) {
                    printf("Dequeued element: %d\n", value);
                }
                break;

            case 3:
                display(&q);
                break;

            case 4:
            	printf("The program is run by:Veer Pratap Singh(2100320120184)\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

