//C program for implimentation of Selection Sort
#include <stdio.h>
int main()
{
 int array[50],n,i,j,position,Temp;
 printf("Enter number of elements :");
 scanf("%d", &n);
 printf("Enter the N elements :");
 for (i=0;i<n;i++)
   scanf("%d", &array[i]);
 for(i=0;i<n-1;i++)
 {
   position=i;
   for(j=i+1;j<n;j++)
   {
     if(array[position]>array[j])
       position=j;
   }
   if(position!= i)
   {
     Temp=array[i];
     array[i]=array[position];
     array[position]=Temp;
   }
 }
 printf("Sorted Array: ");
 for(i=0;i<n;i++)
   printf("%d\t",array[i]);
 return 0;
}
