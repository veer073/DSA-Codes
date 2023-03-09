#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void push(Stack* s, char item) {
    if (s->top >= MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    s->top++;
    s->data[s->top] = item;
}

char pop(Stack* s) {
    if (s->top == -1) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    char item = s->data[s->top];
    s->top--;
    return item;
}

bool is_empty(Stack* s) {
    return s->top == -1;
}

bool is_valid_expression(char* expr) {
	int i;
    Stack s = { .top = -1 };
    for (i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (c == '(') {
            push(&s, c);
        } else if (c == ')') {
            if (is_empty(&s)) {
                return false;
            } else {
                pop(&s);
            }
        }
    }
    return is_empty(&s);
}

int main() {
    char expr[MAX_SIZE];
    printf("This program is made by Veer Pratap Singh(2100320120184)\n");
    printf("Enter a parenthesized arithmetic expression: ");
    scanf("%s", expr);
    if (is_valid_expression(expr))
        printf("The expression is valid.\n");
	else 
        printf("The expression is not valid.\n");
    return 0;
}

