//C program to find the sum and Average of the numbers inthe array.
#include<stdio.h>
int main()
{
    int i,a[20],n,sum=0;
    float avg=0;
    printf(" Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=((float)sum/(float)n);
    printf("The sum of all number in array is %d ",sum);
    printf("\nThe average of all number in array is %f ",avg);
    return 0;
}
    

