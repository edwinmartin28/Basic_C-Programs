//C program do Linear Search.
#include<stdio.h>
int main()
{
  system("cls"); 
  int a[100],search,i,n;
  printf("Enter number of elements in array :");
  scanf("%d",&n);
  printf("\n Enter the array elements :");
  for(i= 0;i<n;i++)
    scanf("%d",&a[i]);
  printf("\n Enter a number to search :");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(a[i]==search) 
    {
      printf("\n %d is present at location %d",search,i+1);
      break;
    }
  }
  if(i==n)
   printf("\n %d isn't present in the array ",search);
  return 0;
}