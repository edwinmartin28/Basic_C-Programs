//C program to find the perfect square numbers.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp;
    float d;
    printf("Enter a number :");
    scanf("%d", &n);
    d = sqrt(n);
    temp=d;
    if(temp==d)
     printf("The given number is a perfect square number ");
    else 
    printf("The given number is not a perfect square number ");
    return 0;
}