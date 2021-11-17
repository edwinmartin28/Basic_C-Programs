//C program to swap two elements with out using 3rd element.
#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter two elements for swapping :");
  scanf("%d%d",&a,&b);
  printf("Before swap a=%d b=%d \n",a,b);  
  a=a+b;
  b=a-b;
  a=a-b;          
  printf("After swap a=%d b=%d",a,b);    
  return 0;   
}