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

int isempty()
{
	return s.top==-1;
}
void push(int x) {
    if (s.top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    s.items[++s.top] = x;
}

int pop() {
    if (isempty()) {
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

void decimal_to_binary(int n) {
	int r;
	initialize();
    while (n > 0) {
    	r=n%2;
        push(r);
        n /= 2;
    }
     printf("Binary representation: ");
     while (!isempty()) {
        printf("%d", pop());
    }
    printf("\n");
}

int main() {
    int n;
    initialize();
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimal_to_binary(n);
   
   
    return 0;
}
