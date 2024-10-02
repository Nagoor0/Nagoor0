Queue using ll
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*front, *rear;
void enqueue(int data)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no memory");
    }
    else
    {
        new->data=data;
        if(front==NULL && rear==NULL)
        {
            front=new;
            rear=new;
            front->next=NULL;
            rear->next=NULL;
        }
        else
        {
            rear->next=new;
            rear=new;
        }
    }
}
struct node*temp;
void dequeue() 
{
    if(front==NULL)
    {
        printf("queue is empty");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
    }
}
struct node*temp;
void display() 
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main() 
{
    enqueue(87);
    enqueue(56);
    enqueue(48);
    display();
    dequeue();
    display();
}
