#include <stdio.h>
#include <string.h>
int main()
{
  int i,vowels=0,space=0,consonants=0,l;
  char a[1000];
  printf("Input a string(ending with a $ symbol) :");
  gets(a);
  l=strlen(a);
  if(a[l-1]=='$')
  {
   for(i=0;a[i]!='\0';i++)
   {
     if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
       vowels++;
     else if(a[i]==' ')
       space++;
     else if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
       consonants++;
   }
   printf("\n Numbers of Vowels =%d",vowels);
   printf("\n Numbers of Consonants =%d",consonants);
   printf("\n Numbers of White Spaces =%d",space);
  }
  else
  {
    printf("The last element of the string is not '$'");
  }
  return 0;
}
