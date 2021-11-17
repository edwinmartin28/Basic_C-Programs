//Generate Fibonacci series upto Nth term using function.
#include<stdio.h>
void fibonacci(int n);
int main()
{
    system("cls");
    int n;
    printf("Enter number of terms in the series :");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int i,first=0,second=1,third;
    printf("%d \t %d \t",first,second);
    for(i=3;i<=n;i++)
    {
        third=first+second;
        printf(" %d \t",third);
        first=second;
        second=third;
    }
}