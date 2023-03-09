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

void decimal_to_octal(int n) {
	int r;
    while (n > 0) {
    	r=n%8;
        push(r);
        n /=8;
    }
     printf("Octal representation: ");
     while (s.top != 0) {
        printf("%d", pop());
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    decimal_to_octal(n);
   
   
    return 0;
}
