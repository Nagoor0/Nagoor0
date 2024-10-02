DLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*head;
void insertatfront(int data)
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
        if(head==NULL)
        {
            new->prev=NULL;
            new->next=NULL;
            head=new;
        }
        else
        {
            new->next=head;
            head->prev=new;
            new->prev=NULL;
            head=new;
        }
    }
}
struct node*head, *temp;
void insertatend(int data) 
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
        if(head==NULL)
        {
            new->prev=NULL;
            new->next=NULL;
            head=new;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new;
            new->prev=temp;
            new->next=NULL;
        }
    }
}
struct node*head, *temp;
void insertatmiddle(int data)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no memory");
    }
    else
    {
        int pos, i;
        printf("enter the pos:");
        scanf("%d", &pos);
        new->data=data;
        temp=head;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next->prev=new;
        temp->next=new;
        new->prev=temp;
    }
}
struct node*head, *temp;
void deleteatfront()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }
}
struct node*head, *temp, *prev;
void deleteatend() 
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
}
struct node*head, *temp, *prev;
void deleteatmiddle() 
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        int pos, i;
        printf("enter the position:");
        scanf("%d", &pos);
        temp=head;
        for(i=1;i<pos;i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        temp->next->prev=prev;
        free(temp);
    }
}
struct node*head, *temp;
void search() 
{
    int key, c=0;
    printf("enter the num to search:");
    scanf("%d", &key);
    temp=head;
    while(temp!=NULL) 
    {
    if(temp->data==key) 
    {
        c=1;
        break;
    }
    temp=temp->next;
  }
    if(c==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
}   
void display()
{
    temp=head;
    while(temp!=NULL) 
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main() 
{
    insertatfront(30);
    insertatfront(50);
    insertatfront(20);
    display();
    insertatend(60);
    insertatend(80);
    display();
    insertatmiddle(90);
    display();
    deleteatfront();
    display();
    deleteatend();
    display();
    deleteatmiddle();
    display();
    search();
    
}
