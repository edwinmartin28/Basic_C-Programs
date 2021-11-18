//C program to find the perimeter of a circle.
#include <stdio.h>
int main()
{
  int r;
  float per;
  printf("Enter the radius of a circle :");
  scanf("%d", &r);
  per= 2*3.14*r;
  printf("The perimeter of the given circle is %f",per);
  return 0;
}
