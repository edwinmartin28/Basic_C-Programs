#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter your first name : ");
    scanf("%s",a);
    printf("Enter your last name : ");
    scanf("%s",b);
    strcat(a,b);
    printf("%s",a); 
    return 0;

}
