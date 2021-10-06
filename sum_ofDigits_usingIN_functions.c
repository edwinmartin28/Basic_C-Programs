//Sum of digit using recursion function
#include <stdio.h>
int sum(int num);
int main()
{
    int num,result=0;
	printf("Enter a Number :");
    scanf("%d",&num);
	result = sum(num);
	printf("Sum of digits of %d is %d\n", num, result);
	return 0;
}
int sum(int num)
{
	if (num == 0)
	 return 0;
    else
	 return ((num % 10) + sum(num / 10));
}
