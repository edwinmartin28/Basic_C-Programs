//C program to find the occurance of all numbers in a array.
#include<stdio.h>
int main()
{
  int a[100],occ, i, n,count=0,j;
  printf("Enter number of elements in array :");
  scanf("%d", &n);
  printf("\n Enter the array element :");
  for (i= 0;i<n;i++)
    scanf("%d", &a[i]);
  for(i=0;i<n;i++)
  {
    count=0;
    for(j=0;j<n;j++)
    {
      if(a[j]==a[i])
        count++;
    }
    printf("\n%d\t\t%d",a[i],count);
  }
  return 0;
}