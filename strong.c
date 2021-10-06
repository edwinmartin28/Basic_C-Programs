#include<stdio.h>
int main()
{
    int n, m, i, d, sum=0;
    printf("Enter a number :");
    scanf("%d", &n);
    m=n;
    while(n>=1)
    {
		    d = n % 10;
        int fact=1;
        for(i=1;i<=d;i++)
	      {  
		      fact = fact * i;          
	      }
        sum = sum +fact;
        n = n /10;
    }
    if(sum == m)
      printf("\nNumber is a strong");  
    else 
      printf("\nNumber is not a strong");  
    return 0;

}