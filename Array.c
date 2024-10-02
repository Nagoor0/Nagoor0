#include <stdio.h>
#define max 5
int current_size=4,element,pos,i;

int display(int a[])
{
    printf("array before operation \n");
    for (i=0;i<max;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}


int insert_at_ft(int a[])
{  
    printf("Enter the element you want to insert:");
    scanf("%d",&element);
    for(int i=current_size;i>0;i--){
        a[i]=a[i-1];
    }
      a[0]=element;
      current_size+=1;
      printf("aftet insertion");
     for(int i=0;i<5;i++)
     {
         printf (":%d",a[i]);
     }
        printf("\n");
}
int insert_at_ed(int a[]){
    printf("Enter the element:");
    scanf("%d",&element);
    a[0]=element;
    for(int i=0;i<max;i++);{
      printf("%d",a[i]);
      printf("\n");
 }
}
int insert_at_md(int a[]){
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0||pos>current_size){
        printf("invalid position");
    }
    else{
    printf("Enter the element:");
    scanf("%d",&element);
    for(int i=current_size;i>pos;i--){
        a[i]=a[i-1];
        a[pos]=element;
        current_size+=1;
    }
    for(i=0;i<max;i++){
         printf("%d",a[i]);
   }
  }
}
int del(int a[]){
    printf("Enter the position:");
    scanf("%d",&pos);
    if(pos<0||pos>current_size){
        printf("invalid position");
    }
    else{
    for(i=pos;i<current_size-1;i++){
     a[i]=a[i+1];
    }
     for(i=0;i<current_size-1;i++){
     printf("%d",a[i]);
    }
  }
}
int search(int a[]){
    int found;
    printf("Enter the element:");
    scanf("%d",&element);
    for(i=0;i<max;i++){
    if(a[i]==element){
       printf("The element %d was found in index [%d]",element,i);
       found=1;
       break;
    }
    }
    if(found!=1){
        printf("The element was not found");
    }
}
void sort(int a[]) {
    int temp;
    for (i=0; i<max; i++) {
        for (int j=0; j<max; j++) {
          if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
    printf("After sorting\n");
    for(i=0;i<max;i++){
        printf("%d",a[i]);
        printf("\n");
    }
}
 int main()
 {
    int a[5]={10,20,30,40},user_n,c;
    printf("Enter a number\n 1 to display\n 2 to insert at front \n 3 to insert at end \n 4 to insert at middle\n 5 to delete an element\n 6 to search\n 7 to sort \nYour choice:");
    scanf("%d",&user_n);
    
     switch(user_n){
        case 1:
          display(a);
          break;
        case 2:
         insert_at_ft(a);
         break;
        case 3:
         insert_at_ed(a);
         break;
        case 4:
         insert_at_md(a);
         break;
        case 5:
         del(a);
         break;
        case 6:
         search(a);
         break;
        case 7:
         sort(a);
         break;
        default:
         printf("Invalid number");
         break;
         
    }

return 0;
 }
