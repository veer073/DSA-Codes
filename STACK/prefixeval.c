#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100

int stack[MAX_STACK_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_STACK_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

int evaluate_prefix(char *exp) {
    int i;
    char ch;
    int op1, op2, result;

    for (i = strlen(exp) - 1; i >= 0; i--) {
        ch = exp[i];

        if (isdigit(ch)) {
            push(ch - '0');
        }
        else {
            op1 = pop();
            op2 = pop();

            switch (ch) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    result = op1 / op2;
                    break;
                case '%':
                    result = op1 % op2;
                    break;
                default:
                    printf("Invalid operator\n");
                    exit(1);
            }

            push(result);
        }
    }

    return pop();
}

int main() {
    char exp[MAX_STACK_SIZE];
	printf("This program is made by Veer Pratap Singh(2100320120184)\n");
    printf("Enter a prefix expression: ");
    scanf("%s", exp);

    int result = evaluate_prefix(exp);

    printf("Result = %d\n", result);

    return 0;
}

