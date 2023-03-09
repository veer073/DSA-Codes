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

void decimal_to_any(int n,int b) {
	int r,x;
	char con[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while (n > 0) {
    	r=n%b;
        push(r);
        n /= b;
    }
     printf("%d base representation: ",b);
     while (s.top != 0) {
     	x=pop();
        printf("%c", con[x]);
    }
    printf("\n");
}

int main() {
    int n,b;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Enter base number: ");
    scanf("%d", &b);
    decimal_to_any(n,b);
   
   
    return 0;
}

