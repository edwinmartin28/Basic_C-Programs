//A program to check whether a given value us prime or not using function
#include<stdio.h>
#include<stdlib.h>
int prime(int num);
int main()
{
	system("cls"); 
	int i, num,x;
	printf("Enter a Number :");
	scanf("%d",&num);
	x=prime(num);
    if (num==1)
	  printf("The given number neither prime or composite number");
	else if(x==0)
      printf("The given number is a prime number ");
    else
      printf("The given number is not a prime number");
	return 0;
}
int prime(int num)
{
    int i,x=0;
    for(i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			x=1;
            return x;
		    exit(0);
		}
	}
    return x;
}