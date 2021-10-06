#include<stdio.h>
int main()
{
   system("cls"); 
   int n, temp=0, i, j, a[30];
   printf("How many Elements: ");
   scanf("%d",&n);
   printf("Enter the numbers: ");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n-1-i;j++)
      {
        if(a[j]>a[j+1])
        {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
      }
   }
   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
   return 0;
} 
