//C program to LCM and HCF of two Numbers.
#include<stdio.h>
int main()
{
	 system("cls");  
	 int a,b,hcf,lcm,i;
	 printf("Enter first number: ");
	 scanf("%d",&a);
	 printf("Enter second number: ");
	 scanf("%d",&b);
	 for(i=1;i<=a;i++)
	 {
		  if(a%i==0 && b%i==0)
		  {
		   	hcf=i;
		  }
	 }
	 lcm=(a*b)/hcf;
	 printf("HCF = %d and LCM = %d",hcf,lcm);
	 return 0;
}