//C program to generate the multiplication table.
#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The Multiplication table of %d \n",n);
    for(i=1;i<=10;i++)
    {
     a=i*n;
     printf("%d * %d = %d\n",i,n,a);
    }
    return 0;
}