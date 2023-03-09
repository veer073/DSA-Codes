#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct queue {
    struct node* front;
    struct node* rear;
};
void initQueue(struct queue* q) {
    q->front = q->rear = NULL;
}
int isEmpty(struct queue* q) {
    return (q->front == NULL);
}
void enqueue(struct queue* q, int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (q->front == NULL) {
        q->front = newNode;
        q->rear = newNode;
        newNode->next = q->front;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        newNode->next = q->front;
    }
}
int dequeue(struct queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    int value;
    if (q->front == q->rear) {
        value = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    } else {
        struct node* temp = q->front;
        value = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front;
        free(temp);
    }

    return value;
}
void display(struct queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    struct node* current = q->front;
    printf("Queue: ");
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != q->front);
    printf("\n");
}
int main() {
    struct queue q;
    initQueue(&q);

    int choice, value;

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
                enqueue(&q, value);
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

