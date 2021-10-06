#include<stdio.h>
int main()
{
	system("cls"); 
	int n ,i ,m;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=0;n>=1;i++)
	{
		m = n % 10;
		n = n / 10;
	}
	printf("The number of digits in a given number is %d",i);
	return 0;
}
