#include <stdio.h>
#include <stdlib.h>
#define maxsize 100
void push(int value, int *top, int stack[])
{
    if (*top == maxsize - 1)
    {
        printf("Stack is Full\n");
        return;
    }
    ++*top;
    stack[*top] = value;
}

void pop(int *top, int stack[])
{
    if (*top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("%d", stack[*top]);
    --*top;
}

int peek(int *top, int stack[])
{
    if (*top == -1)
    {
        return -1;
    }
    return stack[*top];
}

int main()
{
    int stack[100];
    int top = -1, n, v;

    while (1)
    {
        printf("Enter your choice 1. push 2. pop 3.peek 4 exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            scanf("%d", &v);
            push(v, &top, stack);
            break;
        case 2:
            pop(&top, stack);
            break;
        case 3:
            int x = peek(&top, stack);
            printf("%d", x);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid\n");
            break;
        }
    }
}