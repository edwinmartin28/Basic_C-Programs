#include <stdio.h>
int main()
{
    int large,small,i,n,a[50];
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter N elements to the array :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    large=a[0];
    small=a[0];
    for(i=0;i<n;i++)
     {
         if(large<a[i])
          large=a[i];
         else if(small>a[i])
          small=a[i];
     }
     printf("\n largest  = %d",large);
     printf("\n Smallest = %d",small);
    return 0;
}