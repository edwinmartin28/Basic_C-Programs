#include<stdio.h>
int main()
{
    int i,n,a[30],x,j;
    printf("Enter the number if elements :");
    scanf("%d",&n);
    printf("Enter n elements to array :");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    printf("The prime numbers are :");
    for(i=0;i<n;i++)
    { 
     x=1;
     for(j=2;j<=a[i]/2;j++)
	   { 
		  if(a[i]%j==0)
		  {
            x=0;
            break;
      }
	   }
    if(a[i]==1)
      printf("(1 is neither prime or composite number)");
    else if(x==1)
      printf("\t %d",a[i]);
    }
    return 0;
}