//C program to implement Queue using linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    struct Node *link;
};

struct Node *front,*rear,*temp;
void Enqueue();
void Dequeue();
void Display(struct Node *ptr);
int main()
{
    system("cls"); 
    int choice;
    char c[10];
    do
    {
      printf("\tQUEUE USING LINKED LIST\n");
      printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n0.EXIT\n");
      printf("Enter your Choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1 : Enqueue();
            break;
        case 2 : Dequeue();
            break;
        case 3 : Display(front);
            break;
        case 0 : exit(0);
        default: printf("\nInvalid Input");
  }  printf("Do you want to continue(y/n) : ");
  scanf("%s",c);
 }while(strcmpi(c,"Y")==0||strcmpi(c,"y")==0);
 return 0;
}
void Enqueue()
{
    struct Node *ptr;
    ptr =(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value :");
    scanf("%d",&ptr->value);
    ptr->link=NULL;
    if(front==NULL)
     rear=front=ptr;
    else
     {
       rear->link=ptr;
       rear=ptr;
     }
}
void Dequeue()
{
    if(front==NULL)
     printf("Queue Empty\n");
    else
     {
       temp=front;
       front=front->link;
       free(temp);
     }
}
void Display(struct Node *ptr)
{
    printf("Value= ");
    while(ptr!=NULL)
     {
       printf("%d\t",ptr->value);
       ptr=ptr->link;
     }
     printf("\n");
}