Queue in array
#include<stdio.h>
#define max 10
int a[max];
int front=-1, rear=-1;
void enqueue(int data)
{
    if(rear==max-1)
    {
        printf("list is full");
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    a[rear]=data;
}
void dequeue() 
{
    if(front==rear)
    {
        front=-1;
        rear=-1;

    }
    else
    {
        front=front+1;
    }
}
void display()
{
    for(int i=front;i<=rear;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void main() 
{
    printf("Insertion:");
    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();
    printf("After deletion:");
    dequeue();
    dequeue();
    display();
}
