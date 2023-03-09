#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stack{
	int top;
	int data[10];
}s;

void initialize()
{
	s.top=-1;
}

int empty()
{
	if(s.top==-1)
		printf("Empty stack");
}

int push(int x)
{
	if(s.top==9){
		printf("Overflow");
		return;
	}
	s.top++;
	s.data[s.top]=x;

}
int pop()
{
	int x;
	if(empty()){
		printf("Empty stack");
		exit(1);
	}
	x=s.data[s.top];
	s.top--;
	return x;
}

void display(){
	int i;
	for(i=s.top;i>0;i--){
		printf("%d ",s.data[i]);
	}
}

decimal_to_binary(int x)
{
	int r,n;
	initialize();
	while(x>=0)
	{
		r=x%2;
		push(r);
		x=x/2;
	}
	while(s.top!=-1)
	{
		n=pop();
		printf("%d",n);
	}
}

int main()
{
	int x;
	initialize();
	push(12);
	push(13);
	push(14);
	push(15);
	push(16);
	display();
	decimal_to_binary(13);
	
}
