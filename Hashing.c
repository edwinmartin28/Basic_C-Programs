//C program for Linear probing
#include <stdio.h>
#include <stdlib.h>
int F[100];
void Insert();
void Display();
int main()
{
    system("cls");
    int ch,i;
    for (i=0;i<100;i++)
        F[i] = -1;
    do
    {
        printf("1.insert 2.display 0.exit\n");
        printf("Enter a choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
         case 1:Insert();break;
         case 2:Display();break;
         case 0:exit(0);
         default: printf("Invalid choice!!\n");
        }
    } while (ch != 0);
}
void Insert()
{
    int k,f,x,m=100;
    printf("Enter a 4digit number : ");
    scanf("%d", &x);
    if(x>=1000&&x<=9999)
    {
     k =x % m;
     f = k;
     if(F[k] == -1)
        F[k] = x;
     else
     {
        while(F[k] != -1)
        {
            if(k == 99)
                k = 0;
            else
                k++;
            if(k == f)
            {
                printf("Array full");
                return;
            }
        }
        F[k] = x;
     }
    }
    else 
    {
        printf("Entered is not a 4digit\n");
        return;
    }
}
void Display()
{
    int i;
    for(i=0;i<100;i++)
    {
        if(F[i]!=-1)
        {
            printf("values = %d   index = %d \n",F[i],i);
        }
    }
}
