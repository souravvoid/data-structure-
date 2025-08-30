#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100 


void enqueue(int queue []  ,int *front,int *rear)
{   int value;
    if(*rear == MAX -1)
    {
        printf("queue is full");
    }
    else if (*front == -1 && *rear == -1) 
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
         printf("queue is empty");
    }
    else if (*front == *rear)
    {
        *front =-1;
        *rear = -1 ;

    }
     
    else{
        printf("dequeue element = %d",queue[*front]);
    }
    

    
}

int deque(int queue[],int *rear,int *front)
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
    else
    {
  for(int i = *front;i<=*rear;i++)
  {
    printf("%d",queue[i]);
  }
   }
}


int main()
{
    int queue[MAX];
    int front = -1;
    int rear = -1;

    enqueue(queue,&front ,&rear,10,20);
    enqu
    dequeue( queue,&front,&rear ,10);
    deque(queue,&front,&rear);
    display(queue,&front ,&rear);
    return 0;
}

/*
#include <stdio.h>

    void enqueue(int queue[], int *front, int *rear, int n)
{

    if (*rear == 99)
    {
        printf("Queue is full");
        return;
    }
    else if (*rear == -1 && *front == -1)
    {

        *front = 0;
        *rear = 0;
        queue[*rear] = n;
    }
    else
    {
        ++*rear;
        queue[*rear] = n;
    }
}

void dequeue(int queue[], int *front, int *rear)
{

    if (*front == -1 && *rear == -1)
    {

        printf("Queue is empty");
    }
    else if (*front == *rear)
    {

        *front = -1;
        *rear = -1;
    }
    printf("Element deleted= %d\n", queue[*front]);
    ++(*front);
}

int Front(int queue[], int *front, int *rear)
{

    if (*front == -1 && *rear == -1)
    {

        printf("Queue is empty");
        return -1;
    }
    return queue[*front];
}

void display(int queue[], int *front, int *rear)
{

    if (*front == -1 && *rear == -1)
    {

        printf("Queue is empty");
    }
    printf("%d %d\n", *front, *rear);
    for (int i = *front; i <= *rear; i++)
    {
        printf("%d ", queue[i]);
    }
}

int main()
{

    int front = -1;
    int rear = -1;
    int queue[100];
    enqueue(queue, &front, &rear, 10);
    enqueue(queue, &front, &rear, 20);
    enqueue(queue, &front, &rear, 30);
    enqueue(queue, &front, &rear, 40);
    display(queue, &front, &rear);
    printf("\n");
    dequeue(queue, &front, &rear);
    printf("%d", Front(queue, &front, &rear));
    printf("\n");
    display(queue, &front, &rear);
}

*/