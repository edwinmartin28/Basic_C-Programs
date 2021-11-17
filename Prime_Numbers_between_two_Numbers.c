//C program to find the prime numbers between the numbers.
#include<stdio.h>
int main()
{
  int a,b,n,i,flag,j;
  printf("Enter lower limits :");
  scanf("%d",&a);
  printf("Enter upper limits :");
  scanf("%d",&b);
  printf("The Prime numbers are :");
  for(;a<=b;a++)
   {
     flag=0;
     for(j=2;j<a-1;j++)
      {
        if(a%j==0)
         {
           flag=1;
           break;
         }
      }
     if(flag==0)
      printf("\n \t \t \t %d",a);
   }
   return 0;
}
