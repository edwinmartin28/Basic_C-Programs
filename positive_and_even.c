#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number :");
    scanf("%d",&i);
    if(i>0)
    {
     if(i%2==0)
     {
      printf("The given number is both positive and even.");
     }
     else
      printf("The given number is positive but not even.");
    }
    else if(i%2==0)
    {
     printf("The given number is not positive but an even number.");
    }
    else
     printf("The given number is not positive and not an even.");  
    return 0;
}