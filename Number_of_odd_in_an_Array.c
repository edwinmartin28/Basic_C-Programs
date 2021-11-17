//C program to find the number of odd elements in an array.
#include<stdio.h>
int main()
{
    system("cls"); 
    int i,a[20],n,count=0;
    printf(" Enter the number of elements :");
    scanf("%d",&n);
     printf("Enter the array elements :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        count++;
    }
    printf("The number of odd elements is :%d",count);
    return 0;
}
