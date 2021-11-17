//c program to calculate the distance b/w two points in 3 dimensions
#include <stdio.h>
#include <math.h>
int main()
{
  system("cls"); 
  float x1,y1,z1,x2,y2,z2,s;
  printf("Enter the first coordinates :");
  scanf("%f%f%f",&x1,&y1,&z1);
  printf("Enter the second coordinates :");
  scanf("%f%f%f",&x2,&y2,&z2);
  s=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
  printf("The distance between P1 = (%f, %f, %f) and P2 = (%f, %f, %f) is %f ",x1,y1,z1,x2,y2,z2,s);
  return 0;
}
