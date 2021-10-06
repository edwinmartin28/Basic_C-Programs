//Check wheather a given  entered string is in small case or not using functions.
#include<stdio.h>
void smallcase(char a[]);
int main()
{  
    char a[50];
    printf("Enter a character :");
    gets(a);
    smallcase(a);
    return 0;
}
void smallcase(char a[])
{
    int i,n=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
           printf("The string is not fully in small Letters");
           n=1;
           break;
        }
    }
    if(n==0)
    {
        printf("The string is fully in Small Letters");
    }
}


