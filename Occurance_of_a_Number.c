//C program to find the occurence of a number in a array.
#include <stdio.h>
int main()
{
  int a[100],occ, i, n,count=0;
  printf("Enter number of elements in array :");
  scanf("%d", &n);
  printf("\n Enter the array element :");
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);
  printf("\n Enter a number to find its occurence :");
  scanf("%d", &occ);
  for(i=0;i<n;i++)
  {
    if(a[i] == occ) 
     count++;
  }
  printf("\n The occurence of the given number is %d",count);
  return 0;
}

