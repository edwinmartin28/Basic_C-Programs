#include<stdio.h>
int main()
{
	int n, d, r=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>=1)
	{
		d = n % 10;
		r = (r*10) + d;
		n = n /10;
	}
	printf("The reverse of the given number is %d",r);
	return 0;
}
