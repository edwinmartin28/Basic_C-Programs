//A program to display the multiplication table of a number upto 10
#include<stdio.h>
void multiply(int n);
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    multiply(n);
    return 0;
}
void multiply(int n)
{
    int i,a;
    printf("The Multiplication table of %d \n",n);
    for(i=1;i<=10;i++)
    {
     a=i*n;
     printf("%d * %d = %d\n",i,n,a);
    }
}