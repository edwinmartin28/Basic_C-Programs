#include<stdio.h>
int main()
{
    char a[50];
    int i,n=0;
    printf("Enter a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("The toggled string is: ");
    puts(a);
    return 0;
}
