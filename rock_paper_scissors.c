#include <stdio.h>
#include <stdlib.h>
int main()
{  
    int  user=0 ,comp=0, limit,num,r;
    char choice;
    c:
    printf(" ###### ROCK PAPPER SCISSORS GAME.....");
    printf("\n 1.ROCK  2.PAPER  3.SCISSORS ");
    printf("\n Enter a limit :");
    scanf("%d", &limit);
    n:
    printf("\n Enter your choice : ");
    scanf("%d",&num);
    if(num<1||num>3)
    {
       printf("Invalid entry. Try again.!\n");
       goto n;
    }
    r = rand()%3 + 1;
    printf("\n User chose : %d",num);
    if (r==1)
       printf("\n Computer chose Rock.");
    else if (r==2)
       printf("\n Computer chose Papper."); 
    else
       printf("\n Computer chose Scissors.");
    if (r==num)
    {
      printf("\n The computer and user choosed same value");
      goto n;
    }
    else if((r==1&&num==2)||(r==2&&num==3)||(r==3&&num==1))
     user++;  
    else         
      comp++;
       
   
    printf("     User: %d  Computer: %d \n",user,comp);
    if ((limit==user)||(limit==comp)) 
      printf((user>comp)?"\n You have WON!!!!!!!":"\n You have LOST!");
    else
       goto n;
       
    printf("\n Do you wish to continue (press 'y' for yes or 'n' for no ) :");
    scanf("%s", &choice);
    if((choice=='y' || choice=='Y'))
    {
       user=0;
       comp=0;
       printf("\n cool............");
       printf("\n \n \n \n ");
       goto c;
    }
    else
        exit(0);

       
    return 0;
    
}
