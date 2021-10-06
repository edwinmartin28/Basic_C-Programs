#include<stdio.h>
int main()
{
	system("cls"); 
	int n, i, factorial=1;
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial = factorial * i;
	}
	printf("The factorial of the given number is %d",factorial);
	return 0;
}