//Generate Fibonacci series upto Nth term
#include<stdio.h>
int main()
{
    int i,first=0,second=1,third,n;
    printf("Enter number of terms in the series :");
    scanf("%d",&n);
    printf("%d \t %d \t",first,second);
    for(i=3;i<=n;i++)
    {
        third=first+second;
        printf(" %d \t",third);
        first=second;
        second=third;
    }
    return 0;
}
