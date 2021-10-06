#include<stdio.h>
int main()
{
    system("cls"); 
    int i, n;
    printf("Enter the limit :");
    scanf("%d",&n);
    if(n>10)
    {
      printf("The multiples of 3 and 5 are :");
      for(i=1;i<=n;i++)
      {
        if((i%5==0)&&(i%3==0))
        {
            printf("\n\t\t\t\t %d",i);
        }
      }
    }
    else
      printf("There is no multiples for 3 and 5");
    return 0;
}
