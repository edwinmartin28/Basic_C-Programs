//PRIORITY QUEUE
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int front=-1,rear=-1;
int i,j,max;

struct Elements
{
    int value;
    int priority;
}E[10],T;

void Enqueue();
void Dequeue();
void Sort();
void Display();
int main()
{ 
    char c,ch;
    int opt;
    printf("Enter the Maxsize of Priority Queue : ");
    scanf("%d",&max);
    do
     {
	printf("\n1 - Insert an element into queue");
	printf("\n2 - Delete an element from queue");
	printf("\n3 - Display Queue");
	printf("\n0 - Exit\n");
	printf("\nEnter your Choice : ");
	scanf("%d",&opt);
       switch(opt)
	{
	  case 1:  Enqueue();Display();
		   break;

	  case 2:  Dequeue();
		   break;

	  case 3:  Display();
		   break;

	  case 0:  exit(0);

	  default:printf("\nInvalid Input");
	}

       printf("\n\nDo you want to continue(y/n): ");
       c=getchar();
       scanf("%c",&ch);
     }while(ch=='y' || ch=='Y');
    return 0;
}

void Enqueue()
{
    if(rear==max-1)
     {
       printf("\nQueue is full\n");
     }
     else
     {
       if(front==-1)
       {
	       front=0;
       }
       rear++;

       printf("\nEnter value and priority\n");
       printf("Value : ");
       scanf("%d",&E[rear].value);
       printf("Priority : ");
       scanf("%d",&E[rear].priority);

       Sort();
     }
}

void Dequeue()
{
    if(front==-1)
     printf("\nQueue is empty\n");
    else
     {
      printf("Deleted \n value =  %d\tpriority = %d",E[front].value,E[front].priority);
      if(front==rear)
       front =rear= -1;
      else 
       front++;
     }
}

void Sort()
{
    for(i=front;i<rear;i++)
     {
       for(j=front;j<rear;j++)
	     {
	      if(E[j].priority>E[j+1].priority)
	      {
	       T=E[j];
	       E[j]=E[j+1];
	       E[j+1]=T;
	      }
     	}
     }
}

void Display()
{   printf("\nPriority Queue\n");
    for(i=front;i<=rear;i++)
     {
       printf("\nValue = %d\t",E[i].value);
       printf("Priority = %d",E[i].priority);
     }
}
