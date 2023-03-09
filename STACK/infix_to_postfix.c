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


bool prcd(char op1,char op2)
{
	if(op1=='(')
		return FALSE;
	else{
		if(op2=='(')
			return FALSE;
		else{
			if(op2==')')
				return TRUE;
			else{
				if(op1='|'|| op1='*'||op1='/'||op1='%' )
				{
					if(op2=='|')
						return FALSE;
					else
						return TRUE;
							
				}
				else{
					if(op1=='+'||op1=='-')
					{
						if(op2=='+'||op2=='-')
							return TRUE;
						else
							return FALSE;	
					}
				}
			}	
		}	
	}	
}

//infix to postfix

void infixtipostfix(char *infix)
{
	int i=0,j=0;
	char postfix[20],symb,x;
	initialize();
	while(infix[i]!='\0')
	{
		symb=infix[i++];
		if(symb>='a'&&symb<='z' || symb>='A'&&symb<='Z' ||symb>='0'&&symb<='9'  )
		{
			postfix[j]=symb;
			j++;
		}
		else
		{
			while(s.top!=-1 && prcd(stackTop,symb))
			{
				x=pop();
				postfix[j]=x;
				j++;
			}
			if(symb==')')
				pop();
			else
				push(symb);	
		}
		while(s.top!=-1)
		{
			x=pop();
			postfic[j]=x;
			j++;
		}
		postfix[j]='\0';
		printf("postfix equivalent is=> %s",postfix);
	}
	
}
