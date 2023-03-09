#include<stdio.h>
#include<string.h>
void push(char);
char pop();
int top=-1;
	char stack[50];

int main()
{
	int top=-1,len,i,k=0;
	char stack[50],p;
	printf("enter the string\n");
	scanf("%s",stack);
 len=strlen(stack);
	for( i=0;i<len;i++)
	{
		push(stack[i]);
	}
	
	printf("reverse of string \n");
	
	for(i=0;i<len;i++)
	{
		p=pop();
		if(p==stack[i])
		{
			k++;
		}
	}
	if(k==len)
	{
		printf(" \n palindrom");
	}
	else
		printf(" \n not palindrom");
	return 0;
}
void push(char c)
{
	top=top+1;
	stack[top]=c;
}
char pop()
{
	char c;
	
	c=stack[top];
	printf("%c",c);
	top=top-1;
	return c;
}
