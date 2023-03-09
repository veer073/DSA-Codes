#include <stdio.h>
#include <stdlib.h>
int stack1[10], stack2[10];
int top1 = -1, top2 = -1;

void push1(int data)
{
    if (top1 == 10 - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    top1++;
    stack1[top1] = data;
}

int pop1()
{
    if (top1 == -1)
    {
        printf("Stack underflow!\n");
        exit(1);
    }
    int data = stack1[top1];
    top1--;
    return data;
}

void push2(int data)
{
    if (top2 == 10 - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    top2++;
    stack2[top2] = data;
}

int pop2()
{
    if (top2 == -1)
    {
        printf("Stack underflow!\n");
        exit(1);
    }
    int data = stack2[top2];
    top2--;
    return data;
}

void enqueue(int data)
{
    push1(data);
}

int dequeue()
{
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty!\n");
        exit(1);
    }

    if (top2 == -1)
    {
        while (top1 != -1)
        {
            int data = pop1();
            push2(data);
        }
    }

    int data = pop2();
    return data;
}

void display()
{
    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue is: ");
    int i;
    for (i = top2; i >= 0; i--)
    {
        printf("%d ", stack2[i]);
    }
    for (i = 0; i <= top1; i++)
    {
        printf("%d ", stack1[i]);
    }
    printf("\n");
}

int main()
{
    int option, data;
	printf("This Program is made by : Veer Pratap Singh(2100320120184)\n");
    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter the element to be enqueued: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            data = dequeue();
            printf("Element dequeued is: %d\n", data);
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
    } while (option != 4);

    return 0;
}

