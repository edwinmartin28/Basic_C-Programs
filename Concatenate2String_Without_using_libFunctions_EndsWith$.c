//C program to Concatenate two strings without using library functions where strings ends with '$'.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  system("cls"); 
  int j,c,d;
  char a[100],b[100];
  printf("Input the first string(ending with a $ symbol) :");
  gets(a);
  printf("Input the second string(ending with a $ symbol) :");
  gets(b);
  c=strlen(a);
  d=strlen(b);
  if((a[c-1]=='$')&&(b[d-1]=='$'))
  {
    c=c-1;
   	for(j=0;b[j]!='$';c++,j++)
    {
		a[c]=b[j];
	  }
  	a[c]='\0';
    printf("After Concatenation Of Two String: ");
    puts(a);
  }
  else
  {
    printf("The last element of the entered strings are not '$'");
  }
  return 0;
}

   