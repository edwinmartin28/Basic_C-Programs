//C program to find the number of vowels in a string.
#include <stdio.h>
int main()
{
  int i, count=0;
  char a[1000];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
      count++;
  }
  printf("Number of vowels in the string: %d", count);
  return 0;
}