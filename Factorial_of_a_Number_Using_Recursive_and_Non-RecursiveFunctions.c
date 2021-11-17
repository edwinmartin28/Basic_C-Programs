//Factorial of a number using recursive and non recursive functions
#include<stdio.h>
int recursive(int n);
int nonrecursive(int n);
int main()
{
    system("cls"); 
    int n,fact1=0,fact2=0;
    printf("Enter a number :");
    scanf("%d",&n);
    fact1=recursive(n);
    fact2=nonrecursive(n);
    printf("The Factorial of %d by using recursive function is %d .",n,fact1);
    printf("\nThe Factorial of %d by using non recursive function is %d .",n,fact2);
    return 0;
}
int recursive(int n)
{
    if(n==1) 
     return 1;
    else 
     return (n * recursive(n-1));    
}
int nonrecursive(int n)
{
    int fact2=1,i;
    for(i=1; i<=n; i++) 
    {
        fact2=fact2*i;
    }
    return fact2;
}