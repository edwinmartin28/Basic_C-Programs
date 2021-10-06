//Factorial of a number using recursive functions
#include<stdio.h>
int factorial(int n);
int main()
{
    system("cls"); 
    int n,fact=0;
    printf("Enter a number :");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The Factorial of %d is %d", n, fact);
    return 0;
}
int factorial(int n)
{
    if(n==1) 
     return 1;
    else 
     return (n * factorial(n-1));    
}