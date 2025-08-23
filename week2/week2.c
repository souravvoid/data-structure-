/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int found=0;
    int n;
    scanf("%d",&n);
    int mat[n][n];
    printf("enter the your matrix ");// input matrix
    for(int i =0 ; i<n;i++)
    {
        for (int j = 0 ;j<n;j++)
        {
            scanf("%d%d",&mat[n][n]);

        }
    }
   print("enter the matrix row by row",n,n);
   
   int find ;
   scanf("%d",&find);
   int i=0;
   int j=n-1;// use because of sorted array 
   while(i<n && j>= 0)
   {
    if(mat[i][j]==find)
    {    found=1;
        break;
    }
    else if(mat[i][j]>find)
    {  j--;}
    else{
            i++;
        }
    }
   if(found==0){
    printf("not found");
   }else{
    printf("found");
   }
return 0;

}

*/

#include <stdio.h>
#include<stdlib.h>
#define maxsize 100
void push(int value, int *top, int stack[])
    {
        if(*top==maxsize-1)
        {
            printf("Stack is Full\n");
            return;
        }
            ++*top;
            stack[*top]=value;
    }

    void pop(int *top, int stack[])
    {
        if(*top==-1)
        {
            printf("Stack is empty\n");
            return ;
        }
            printf("%d", stack[*top]);
            --*top;
    }

    int peek(int *top, int stack[])
    {
        if(*top==-1)
        {
            return -1;
        }
            return stack[*top];
    }

int main()
{
    int stack[100];
    int top=-1,n,v;

    
    while(1)
    {
        printf("Enter your choice 1. push 2. pop 3.peek 4 exit\n");
        scanf("%d",&n);
        switch (n)
    {
    case 1:
        scanf("%d",&v);
        push(v,&top,stack);
        break;
    case 2:
        pop(&top,stack);
        break;
    case 3:
        int x= peek(&top,stack);
        printf("%d",x);
        break;
        case 4: exit(0);
        break;
    default:
        printf("Invalid\n");
        break;
    }
    }
}


