#include<stdio.h>
int main()
{
    system("cls"); 
    int i,n,a[30],x;
    printf("Enter the divisor :");
    scanf("%d",&x);
    printf("Enter the number if elements :");
    scanf("%d",&n);
    printf("Enter n elements to array :");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("The muliples of the given numbers are : ");
    for(i=0;i<n;i++)
    {
        if(a[i]%x==0)
         {
             printf("\t %d",a[i]);
         }
    }
    return 0;
}
