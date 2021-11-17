//C program to print the first N numbers in an array.
#include <stdio.h>
int main()
{
    system("cls"); 
    int n,i;
    printf("Enter the Limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}
