#include<stdio.h>
#include<math.h>      
void sum();
void diff();
void mult();
void div();
void power();

int stack[50],top=-1;
main()
{
	printf("This program is made by Veer Pratap Singh(2100320120184)\n");
	char st[30];
	int i;
	printf("Enter the postfix expression:");
	scanf("%s",st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]!=' ')
		{
			switch(st[i])
			{
				case '+':
						sum();
						break;
				case '-':
						diff();
						break;
				case '*':
						mult();
						break;
				case '/':
		     			div();
						break;
				case '^':
						power();
						break;
				default:
						top++;
						stack[top] = st[i] - 48;
			}
		}
	}
	printf("\nThe result is = %d",stack[top]);
}
void sum()
{
	int res,op1,op2;
	op1 = stack[top];
	top--;
	op2 = stack[top];
	top--;
	res = op2 + op1;
	top++;
	stack[top] = res;
}          
void diff()
{
	int res,op1,op2;
	op1 = stack[top];
	top--;
	op2 = stack[top];
	top--;
	res = op2 - op1;
	top++;
	stack[top] = res;
}
void mult()
{
	int res,op1,op2;
	op1 = stack[top];
	top--;
	op2 = stack[top];
	top--;
	res = op2 * op1;
	top++;
	stack[top] = res;
}
void div()
{
	int res,op1,op2;
	op1 = stack[top];
	top--;
	op2 = stack[top];
	top--;
	res = op2 / op1;
	top++;
	stack[top] = res;
}
void power()
{
	int res=1,op2,op1,i;
	op1 = stack[top];
	top--;
	op2 = stack[top];
	top--;
	for(i=0;i<op1;i++)
	{
		res = res * op2;
	}
	top++;
	stack[top] = res;
}
