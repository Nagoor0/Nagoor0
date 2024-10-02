SLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *head;
void insertatfront(int data)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("memory is not allocated properly");
    }
    else
{
    new->data=data;
    if(head==NULL)
    {
    new->next=NULL;
    head = new;
    }
    else{
        new->next=head;
        head=new;
    }
}
}
struct node* head,*temp;
void insertatend(int data)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("no memory");
    }
    else{
        new->data=data;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
        
 }
 
}
struct node* head,*temp;
void insertatmiddle(int data)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL){
        printf("no memory");
    }
    else{
        int pos;
        printf("enter pos:");
        scanf("%d",&pos);
        new->data=data;
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
    }
}

struct node*temp;
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
        free(temp);
    }
}
struct node*temp, *prev;
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

struct node*temp, *prev;
void deleteatmiddle()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        int pos;
        printf("enter the position:");
        scanf("%d", &pos);
        temp=head;
        for(int i=1;i<pos;i++)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
    }
}
struct node*temp;
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
void printlist()
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
    insertatfront(10);
    insertatfront(20);
    printlist();
    insertatend(100);
    insertatend(300);
    printlist();
    insertatmiddle(500);
    printlist() ;
    deleteatfront();
    printlist();
    deleteatend();
    printlist();
    deleteatmiddle();
    printlist();
    search();
    
  

   
}
