//reverse of a string using functions
#include <stdio.h>
#include <string.h>
void reverse(char[],int);
int main()
{
  int j;
  char a[100];
  printf("Input the a string :");
  gets(a);
  j=strlen(a)-1;
  reverse(a,j);
  return 0;
}
void reverse(char a[100],int j)
{
  int d,i;
  char b[100]={" "};
  d=j;
  for(i=0;i<=j;i++,d--)
  {
    b[i]=a[d];
  }
  printf("The reverse of the string is :");
  puts(b);
}
