Stack using ll
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*top;
void push(int data)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no memory");
    }
    else
    {
        if(top==NULL)
        {
            new->data=data;
            top=new;
        }
        else
        {
            new->data=data;
            new->next=top;
            top=new;
        }
    }
}
struct node*temp;
void pop() 
{
    if(top==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        temp=top;
        top=top->next;
        free(temp);
    }
}
struct node*temp;
void display() 
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void main()
{
    push(40);
    push(80);
    push(50);
    display();
    pop();
    display();
}
