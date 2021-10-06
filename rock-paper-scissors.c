#include <stdio.h>
#include<stdlib.h>
void main()
{
    printf("Enter game point: ");
    int k,m,up=0,cp=0;
    scanf("%d",&k);
    printf("1.Rock 2.Paper 3.Scissors\n");
    n:
    printf("Enter your choice: ");
    scanf("%d",&m);
    if(m<1||m>3)
    {
      printf("Invalid entry. Try again.!\n");
      goto n;
    }
    int r=rand()%3+1;
    printf((r==1)?"Computer chose Rock.":(r==2)?"Computer chose Paper.":"Computer chose Scissors");
    int u[3]={13,32,21};
    int s=m*10+r;
    if(s==u[0]||s==u[1]||s==u[2])
      up++;
    else if(m==r) {}
    else
      cp++;
    printf("     User: %d  Computer: %d \n",up,cp);
    if(up==k||cp==k)
      printf((up==k)?"You have WON!":"You have LOST!");
    else
      goto n;
}