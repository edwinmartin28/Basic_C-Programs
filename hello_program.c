//C program to read the name and print it.
#include<stdio.h>
int main()
{
	system("cls"); 
	char name[10];
	printf("Hello , \n What is your name:");
	gets(name);
	printf("\n Hello ");
	puts(name);
	return 0;
}
