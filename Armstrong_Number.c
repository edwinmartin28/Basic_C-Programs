//C program to check whether the enterd number is armstrong or not 
#include <stdio.h>
#include <math.h>
int main()
{
    system("cls"); 
    int n, rew, cube=0, s=0, r;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = n;
    while (n>=1)
    {
    	rew= n%10;
    	s++;
    	n = n/10;
	  }
    n= r;
    while (n>=1)
    {
        rew = n%10;
        cube = cube + pow(rew,s);
       	n = n/10;
    }
    if (cube==r)
      printf("The given number is a Armstrong number");
    else
      printf("The given number is not a Armstrong number");
    return 0;
}
