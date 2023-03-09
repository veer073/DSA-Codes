 #include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct stack {
    int top;
    int items[MAX_SIZE];
} s;

void initialize()
{
	s.top=-1;
}

void push(int x) {
    if (s.top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    s.items[++s.top] = x;
}

int pop() {
    if (s.top == -1) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return s.items[s.top--];
}

void display(){
	int i;
	for(i=s.top;i>0;i--){
		printf("%d ",s.items[i]);
	}
}

char stackTop()
{
	char x;
	x=s.items[s.top];
	return x;
}

int main()
{
	char exp[]="(())",x;
	
	int i;
	initialize();
	while(exp[i]!='\0')
	{
		x=exp[i];
		if(x=='(')
			push(x);
		else
			pop();
		i++;		
	}
	if(s.top==-1)
		printf("Correct Expression");
	else
		printf("Incorrect Expression");	
}
