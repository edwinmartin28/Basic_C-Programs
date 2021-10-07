//C program for finding the area of a rectangle
#include<stdio.h>
int main()
{
    system("cls"); 
    int a,l,w;
    printf("Enter the length of a rectangle :");
    scanf("%d",&l);
    printf("Enter the width of a rectangle :");
    scanf("%d",&w);
    a=l*w;
    printf("Area of the rectangle :%d",a);
    return 0;
}
