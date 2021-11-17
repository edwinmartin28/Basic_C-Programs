//C program to copy value from first string to second string
#include<stdio.h>
int main()
{
  system("cls"); 
  char a[100],i,j=0,c[100];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    c[j]=a[i];
    j++;
  }
  c[j]='\0';
  puts(c);
  return 0;
}