#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int front=-1,rear=-1;
int i,j,max,x=0,y;
struct StudentData 
{
    char Name[25];
    char Grade;
    int RollNo;
    int Total;
    int Percentage;
}E[10],T;

void Sort()
 {
    for(i=0;i<rear;i++)
     {
       for(j=0;j<rear;j++)
	     {
	      if(E[j].Total<E[j+1].Total)
	      {
	       T=E[j];
	       E[j]=E[j+1];
	       E[j+1]=T;
	      }
     	}
     }
 }
 
void Display()
 {  
    int j=1;
    printf("\n\t\t\t\t\tRANK LIST\n");
    printf("Rank   \t Name      \t Roll Number \t Total Marks \t Overall Grade \t Overall Percentage\n");
    for(i=0;i<=rear;i++,j++)
     {
       printf("%d   \t %s      \t  %d           \t  %d           \t %c             \t%d \n",j,E[i].Name,E[i].RollNo,E[i].Total,E[i].Grade,E[i].Percentage);
     }
 }

void Enqueue()
 {
    if(rear==max-1)
      printf("\nQueue is full");
     else
      {
       if(front==-1)
	    front=0;
        rear++;
        x++;
        printf("Student %d\n",x);
        printf("Name : ");
        scanf("%s",E[rear].Name);
        printf("Roll Number : ");
        scanf("%d",&E[rear].RollNo);
        printf("Enter the Marks out of 100\n");
        for(i = 0; i <y;i++)
         {
          int mark=0;
          mar:
           printf("Enter the Mark %d:",i+1);
           scanf("%d",&mark);
           if(mark<0 ||mark>100)
            {
             printf("Wrong Entry\n");
             goto mar;
            }
           else
            E[rear].Total=E[rear].Total+mark; 
         }
        E[rear].Percentage=E[rear].Total/y;
        if(E[rear].Percentage<50)
         E[rear].Grade='F';
        else if(E[rear].Percentage>=50 && E[rear].Percentage<60)
         E[rear].Grade='D';
        else if(E[rear].Percentage>=60 && E[rear].Percentage<70)
         E[rear].Grade='C';
        else if(E[rear].Total>=70 && E[rear].Percentage<80)
         E[rear].Grade='B';
        else if(E[rear].Percentage>=80 && E[rear].Percentage<90)
         E[rear].Grade='A';
        else
         E[rear].Grade='S';

       Sort();
     }
}

int main()
 { 
    char c,ch;
    int opt,i;
    do
     {
	   printf("\n1 - Enter the student details");
	   printf("\n2 - Display the rank list");
	   printf("\n3 - Exit");
	   printf("\nEnter your Choice : ");
	   scanf("%d",&opt);
           switch(opt)
	    {
	     case 1:printf("Enter the number of Students: ");
                scanf("%d",&max);
                printf("Number of Subjects:");
                scanf("%d",&y);
                for(i=0;i<max;i++)
                 Enqueue();
		        break;

	     case 2:Display();
		        break;

	     case 3:exit(0);

	     default:printf("\nInvalid Input");
	    }
          printf("\nDo you want to continue(y/n): ");
          c=getchar();
          scanf("%c",&ch);
     }while(ch=='y' || ch=='Y');
    return 0;
 }

