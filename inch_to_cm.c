//C program to convet the value in Inch to centimeter.
#include<stdio.h>
int main()
{
   system("cls"); 
   float inch, centimeter;
   printf("Enter the length in inches :");
   scanf("%f",&inch);
   centimeter = inch * 2.54;
   printf("Value in centimeter is %f ",centimeter);
   return 0;
}
