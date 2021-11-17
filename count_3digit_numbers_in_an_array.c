//C program to count the number of 3 digits numbers in a string.
#include<stdio.h>
int main()
{
   system("cls"); 
   int n,count=0, i, j, a[50];
   printf("How many Elements: ");
   scanf("%d",&n);
   printf("Enter the numbers: ");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       if(((a[i]>=100) && (a[i]<1000)) || ((a[i]<=-100&&a[i]>-1000)))
        count++;
   }
   printf("The number of 3 digits numbers in an array is %d",count);
   return 0;
}
