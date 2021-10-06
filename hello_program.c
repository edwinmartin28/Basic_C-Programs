#include<stdio.h>
int main()
{
	char name[10];
	printf("Hello , \n What is your name:");
	gets(name);
	printf("\n Hello ");
	puts(name);
	return 0;
}
