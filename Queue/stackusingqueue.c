#include <stdio.h>
#include <stdlib.h>

int queue[10];
int front = -1, rear = -1;

void enqueue(int data)
{
    if (rear == 10 - 1)
    {
        printf("Queue overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

int dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue underflow!\n");
        exit(1);
    }
    int data = queue[front];
    front++;
    return data;
}

void push(int data)
{
    enqueue(data);
    int i, size = rear - front + 1;
    for (i = 0; i < size - 1; i++)
    {
        int x = dequeue();
        enqueue(x);
    }
}

int pop()
{
    if (front == -1 || front > rear)
    {
        printf("Stack underflow!\n");
        exit(1);
    }
    int data = dequeue();
    return data;
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack is: ");
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int ch, data;
	printf("This Program is made by : Veer Pratap Singh(2100320120184)\n");
    do
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("Element popped is: %d\n", data);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid option!\n");
        }
    } while (ch != 4);

    return 0;
}

