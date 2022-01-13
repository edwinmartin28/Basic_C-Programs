//C program to implement stack using linked list.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *link;
}*top;
void push();
void pop();
void display();
int main()
{
 system("cls"); 
 int choice;
 char c[10];
 top=NULL;
 do
 {
  printf("\t STACK USING LINKED LIST\n");
  printf("1.PUSH\n2.POP\n3.DISPLAY\n0.EXIT\n");
  printf("Enter your Choice : ");
  scanf("%d",&choice);
  switch(choice)
  {
      case 1 : push();
            break;
      case 2 : pop();
            break;
      case 3 : display();
            break;
      case 0 : exit(0);
      default: printf("\nInvalid Input");
  }
  printf("Do you want to continue(y/n) : ");
  scanf("%s",c);
 }while(strcmpi(c,"Y")==0||strcmpi(c,"y")==0);
 return 0;
}
void push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 if(temp==NULL)
 {
      printf("\nOverflow\n");
 }
 else
 {
     printf("Enter the data : ");
     scanf("%d",&temp->value);
     temp->link=top;
     top=temp;
 }
}
void pop()
{
    if(top==NULL)
    {
        printf("\nUnderFlow\n");
    }
    else
    {
        struct node *temp=top;
        top=top->link;
        free(temp); 
    }
}
void display()
{
    if(top==NULL)
    {
        printf("\nUnderFlow\n");
    }
    else
    {
     struct node *temp;
     temp=top;
     printf("\nStack Contents :");
     while(temp!=NULL)
     {
         printf("%d\t",temp->value);
         temp=temp->link;
     }
    }
 printf("\n");
}
