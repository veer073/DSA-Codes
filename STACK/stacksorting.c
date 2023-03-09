#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
struct stack
{
    int top;
    int data[maxsize];
}S,Stemp;
/**/
void initialize(struct stack * sp)
{
    sp->top=-1;
}
/**/
int IsEmpty(struct stack * sp)
{
    return sp->top==-1;
}
/**/
int push(struct stack * sp, int x)
{
if(sp->top==maxsize-1)
{
    printf("stack overflows");
    return -1;
}
sp->top++;
sp->data[sp->top]=x;
return 1;
}
/**/
int pop(struct stack * sp)
{
    int x;
if(IsEmpty(sp))
{
    printf("stack underflows");
    return -1;
}
x=sp->data[sp->top];
sp->top--;
return x;
}
/**/
int peek(struct stack * sp)
{
    int x;
    x=sp->data[sp->top];
    return x;
}
/**/
void show(struct stack * sp)
{
    int i;
    if(IsEmpty(sp))
    {
       printf("Stack is Empty");
    }
    else
    {
       for(i=sp->top;i>=1;i--)
       {
        printf("%d \t",sp->data[i]);
       }
    }
}
/***/
void sortStack(){
initialize(&Stemp);
while (!IsEmpty(&S))
{
    int a;
    a=pop(&S);
    while (!IsEmpty(&Stemp) && peek(&Stemp)>a)
    {
        int c;
        c=pop(&Stemp);
        push(&S,c);
    }
    push(&Stemp,a);
}
show(&Stemp);
}
/* Driver Program **/
int main()
{
	int choice,x,y,z;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show top element of stack\n4.sort\n5.show\n6.End\n");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: 
                printf("Enter the element");
                scanf("%d",&x);
                push(&S,x);
					break;
			case 2: 
                y=pop(&S);
                printf("Poped element is %d\n",y);
					break;
            case 3:
                 z = peek(&S);
                 printf("Top of the stack is %d\n",z);
                    break;
			case 4: 
                 sortStack();
                 break;
            case 5:
                 show(&S);
                 break;
            case 6:
                 exit(0);
			default: printf("\nInvalid choice!!");
		}
	}
}
