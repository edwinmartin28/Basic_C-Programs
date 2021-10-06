#include<stdio.h>
int main()
{
	double n , i, s=0;
	printf("Enter the limit :");
	scanf("%lf",&n);
	for(i=0;i<=n;i++)
	{
		s = s + i;
	}
	printf("Sum = %lf",s);
	return 0;
}
