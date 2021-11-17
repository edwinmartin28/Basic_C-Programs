//Check wheather a given character entered is in Capital or not using functions.
#include<stdio.h>
int main()
{
    system("cls"); 
    char a[50];
    int i,n=0;
    printf("Enter a string(Capital Letters) :");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
           printf("The string is not fully in Capital Letters");
           n=1;
           break;
        }
    }
    if(n==0)
    {
        printf("The string is fully in Capital Letters");
    }
    return 0;
}
