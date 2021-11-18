#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, num;
	printf("Enter a Number :");
	scanf("%d",&num);
	for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			printf("The given number is not a prime number");
		    exit(0);
		    
		}
	}
	if (num==1)
	  printf("The given number neither prime or composite number");
	else
	  printf("The given number is a prime number ");
	return 0;
}
