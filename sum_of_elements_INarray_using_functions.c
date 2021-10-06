//Sum of all elements in an array using function
#include<stdio.h>
int sum(int n[], int limit);
int main()
{
    int n[50],limit,y,i;
    printf("Enter the Limit :");
    scanf("%d",&limit);
    printf("Enter the array elements :");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&n[i]);
    }
    y=sum(n,limit);
    printf("The sum of all number in array is %d ",y);
    return 0;
}
int sum(int n[], int limit)
{
    int x=0,i;
    for(i=0;i<limit;i++)
    {
        x=x+n[i];
    }
    return x;
}
