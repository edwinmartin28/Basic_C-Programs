//C program to count the number of Capital Letters in the string.
#include <stdio.h>
int main()
{
  system("cls"); 
  int i, count=0;
  char a[1000];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if (a[i]>='A'&&a[i]<='Z')
      count++;
  }
  printf("Number of capital letters in the string: %d", count);
  return 0;
}