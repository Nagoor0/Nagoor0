Stack array
#include<stdio.h>
#define max 100
int arr[max];
int top=-1;
void push(int num) 
{
    if(top==max-1)
    {
        printf("list is full");
    }
    else
    {
        top=top+1;
        arr[top]=num;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("list is empty");
    }
    else
    {
        top=top-1;
    }
}
void print() 
{
    for(int i=top;i>=0;i--)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void main()
{
    push(46);
    push(58);
    push(88);
    print();
    pop();
    print();
}
