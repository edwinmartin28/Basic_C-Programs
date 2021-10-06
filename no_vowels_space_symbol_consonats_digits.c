#include <stdio.h>
int main()
{
  int i,vowels=0,space=0,digits=0,symbols=0,consonants=0;
  char a[1000];
  printf("Input a string :");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
      vowels++;
    else if(a[i]==' ')
      space++;
    else if(a[i]>='0' && a[i]<='9')
      digits++;
    else if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
      consonants++;
    else
      symbols++;
  }
  printf("\n Numbers of Vowels =%d",vowels);
  printf("\n Numbers of Consonants =%d",consonants);
  printf("\n Numbers of Special Symbols =%d",symbols);
  printf("\n Numbers of White Spaces =%d",space);
  printf("\n Numbers of Digits =%d",digits);
  return 0;
}
