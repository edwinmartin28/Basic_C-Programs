#include<stdio.h>
int main()
{
    system("cls"); 
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The factors of %d :",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}