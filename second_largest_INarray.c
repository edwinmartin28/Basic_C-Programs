#include <stdio.h>
int main()
{
    int i,n,a[50],large,second;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter N elements to the array :");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    large=second=a[0];
    for (i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			second=large;
			large=a[i];
		}
		else if(a[i]>second && a[i]<large)
		{
			second=a[i];
		}	
	}
	printf("The Largest Number in this Array =  %d",large);
	printf("\nThe Second Largest Number in this Array =  %d",second);
	return 0;
}