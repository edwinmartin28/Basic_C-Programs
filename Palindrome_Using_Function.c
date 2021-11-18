//Check whether a given number is palindrome or not using function.
#include<stdio.h>
int palindrome(int n);
int main()
{
	system("cls");
	int n,copy,m;
	printf("Enter the number: ");
	scanf("%d",&n);
	copy=n;
	m=palindrome(n);
	if(m==copy)
	  printf("\n The given number is a palindrome");
	else 
	  printf("\n The given number is not  a palindrome");
	return 0;
}
int palindrome(int n)
{
    int d,r=0;
    while(n>=1)
	{
		d = n % 10;
		r = (r*10) + d;
		n = n /10;
	}
    return r;
}
