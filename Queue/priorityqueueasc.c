#include <stdio.h>
#include <stdlib.h>
int queue[10];
int rear = -1;
int front = -1;

void enqueue(int element)
{
    int i;

    if (rear >= 10 - 1)
    {
        printf("Priority Queue Overflow!\n");
        return;
    }

    if (front == -1)  
    {
        front++;
        rear++;
        queue[rear] = element;
    }
    else
    {
        for (i = rear; i >= front; i--)
        {
            if (element > queue[i])
            {
                queue[i + 1] = queue[i];
            }
            else
            {
                break;
            }
        }

        queue[i + 1] = element;
        rear++;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Priority Queue Underflow!\n");
        return;
    }

    printf("Element deleted from the priority queue is : %d\n", queue[front]);
    front++;
}

void display()
{
	int i;
    if (front == -1)
    {
        printf("Priority Queue is empty!\n");
        return;
    }

    printf("Priority Queue is : ");
    for ( i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int ch, element;
    printf("This Program is made by : Veer Pratap Singh(2100320120184)\n");

    do
    {
        
        printf("1. Enqueue an element\n");
        printf("2. Dequeue an element\n");
        printf("3. Display the priority queue\n");
        printf("4. Exit\n");
        printf("Enter your option : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element to be inserted : ");
            scanf("%d", &element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
            break;
        default:
            printf("Invalid option!\n");
        }
    } while (ch != 4);

    return 0;
}

