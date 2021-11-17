//C program to find the quadratic equation of the given number.
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c,d;
	float root1, root2;
	printf("Enter the three co efficients : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0)
	 {
		printf("The value of should not be zero");
	 }
	else
    {
	 d = b*b-4*a*c;
	 if(d>0)
	 {
		root1 = (-b + sqrt(d))/(2*a);
		root2 = (-b - sqrt(d))/(2*a);
		printf("\n First root is : %f",root1);
		printf("\nSecond root is : %f",root2);	
	 }
	 else if (d==0)
 	 {
		root1 = -b/(2*a);
		printf("Root is :%f",root1);
	 }
	 else 
	 printf("Roots are complex");
	}
	return 0;
}

