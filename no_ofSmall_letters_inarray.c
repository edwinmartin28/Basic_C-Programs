#include <stdio.h>
int main()
{
  system("cls"); 
  int i, count = 0;
  char a[1000];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if (a[i]>='a' && a[i]<='z')
      count++;
  }
  printf("Number of small letters in the string: %d", count);
  return 0;
}