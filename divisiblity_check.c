#include<stdio.h>
int main()
{
  system("cls"); 
  int m, n;
  printf("Enter two numbers :");
  scanf("%d%d",&m,&n);
  if (m % n == 0)
    printf("%d is divisible by %d",m,n);
  else 
    printf("%d is not divisible by %d ",m,n);
  return 0;
}
