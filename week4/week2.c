#include<stdio.h>
#include<c.type.h>
#include<stdlib.h>
#define MAX 100 


void enqueue(int queue []  ,int *front,int *rear)
{
    int(*rear == MAX -1)
    {
        printf("queue is full")
    }
    else if (*front == && *rear == -1)
    {
       *front ,*rear =0 ;
       queue[*rear] = value;
    }
    else{
        ++(*rear);
        queue[*rear] = value;

    }
}


void dequeue(int queue[],int *front ,int *rear)
{   ++(*front);
    if(*front == -1 && *rear == -1)
    {
         printf("queue is empty")
    }
    else if (*front == *rear)
    {
        *front =-1;
        *rear = -1 ;

    }
     
    else{
        printf("dequeue element = %d",queue[front]);
    }
    

    
}

int dequeue(int queue[],int *rear,int *front)
{
    if(*front == -1 && *rear == -1)
     {
        printf("queue is empty");
     }
    return queue[*front];
}

void display(int queue[] ,int *front,int *rear )
{  if(*front == -1 || *front  > *rear )
    {
        printf("queue is empty");
    }
  for(int i = *front;i<=*rear;i++)
  {
    printf("%d",queue[i]);
  }
}


int main()
{
    int queue[MAX];
    int front = -1;
    int rear = -1;

    enqueue();
    dequeue();
    display();
    return 0;
}