#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int *s;
    int top;
};
void create(struct stack *st)
{
    printf("Enter the size of the stack: ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}
void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
        printf("%d pushed onto the stack\n", x);
    }
}
int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
        printf("%d popped from the stack\n", x);
    }
    return x;
}
int size(struct stack *st)
{
    return st->top + 1;
}
void display(struct stack st)
{
    printf("Stack elements:\n");
    for (int i = st.top; i >= 0; i--)
    {
        printf("%d\n", st.s[i]);
    }
}
int main()
{
    struct stack st;
    create(&st);
    int choice, value;
    do
    {
        printf("\nPress:\n1 to push\n2 to pop\n3 to calculate size\n4 to exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value to push: ");
            scanf("%d", &value);
            push(&st, value);
            break;
        case 2:
            pop(&st);
            break;
        case 3:
            printf("Current stack size: %d\n", size(&st));
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    free(st.s);
    return 0;
}