#include<stdio.h>
int main()
{
    system("cls"); 
    int i,a[20],n;
    printf(" Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     {
         printf("\n The element %d is at %dth position",a[i],i);
     }
     return 0;


}