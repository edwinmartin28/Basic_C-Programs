//C program to count the n numbered digits from a array.
#include<stdio.h>
int main()
{
    int a[30],n,i,dig,count=0,x;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Which digit number should you need to count :");
    scanf("%d",&x);
    for(i=0;i<n;i++) 
    {
        dig=0;
        while(a[i]!=0)
        {
            a[i]=a[i]/10;
            dig++;
        }
        if(dig==x)
         count++;
    }
    printf("Number of %d -digit elements =%d",x,count);
    return 0;
}