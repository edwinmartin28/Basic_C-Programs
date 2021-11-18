//C program to find the perfect square numbers in an array.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,a[30],count=0,temp=0;
    float d;
    printf("Enter the number if elements :");
    scanf("%d",&n);
    printf("Enter n elements to array :");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        d = sqrt(a[i]);
        temp=d;
        if(temp==d&&d!=0)
          count++;
    }
    printf("Number of Perfect Squares is %d",count);
    return 0;
}
