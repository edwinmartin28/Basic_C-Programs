#include <stdio.h>
int main()
{
  int i,count=0;
  char a[1000];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
      count++;
  }
  printf(" Numbers of characters in the string =%d",count);
  return 0;
}
