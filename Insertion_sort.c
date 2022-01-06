//C program for implimentation of insertion Sort
#include <stdio.h>
int main()
{
 int a[50],n,i,j,temp;
 printf("Enter number of elements :");
 scanf("%d", &n);
 printf("Enter the N elements :");
 for (i=0;i<n;i++)
   scanf("%d", &a[i]);
 for (i = 1; i < n; i++)
 {  
  temp = a[i];  
  j = i - 1;  
  while(j>=0 && temp <= a[j])
  {    
    a[j+1] = a[j];     
    j = j-1;    
  }    
  a[j+1] = temp;    
 }
 printf("Sorted Array: ");
 for(i=0;i<n;i++)
   printf("\t%d",a[i]);
 return 0;  
}  


