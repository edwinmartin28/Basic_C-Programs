//C program to find the smallest of 2 numbers.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    if(a>b)
     printf("The second number is the smallest number");
    else
     printf("The first number is the smallest number");
    return 0;
}