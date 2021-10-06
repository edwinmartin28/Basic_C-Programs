//volume of a rectangle
#include<stdio.h>
int main()
{
	float l, w, h, v;
	printf("Enter the length of Rectangle : ");
	scanf("%f",&l);
	printf("\n Enter the width of Rectangle : ");
	scanf("%f",&w);
	printf("\n Enter the height of Rectangle : ");
	scanf("%f",&h);
	v = l * w * h;
	printf("\n The volume of Rectangle is %f ",v);
	return 0;
}
