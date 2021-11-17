//Check whether a given string is palindrome or not 
#include <stdio.h>
#include <string.h>
int main()
{
  int j,i=0,d=1;
  char a[100];
  printf("Input the a string :");
  gets(a);
  j=strlen(a)-1;
  while(i<=j)
  {
      if(a[i]!=a[j])
      {
        d=0;
        break;
      }
      i++;
      j--;
  } 
  if(d!=0)
   printf("%s is pallindrome",a);
  else
   printf("The Entered string is not pallindrome");
  return 0;
}