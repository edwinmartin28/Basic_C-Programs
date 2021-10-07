//C program to check whether the entered number is positive or  not
#include<stdio.h>
int main()
{
	system("cls"); 
	int i;
	printf("Enter a number :");
	scanf("%d",&i);
	if(i>0)
	  printf("The given Number is Positive");
	else if(i<0)
	  printf("The given Number is Negative");
	else
	  printf("The given Number is Zero");
	return 0;
}
