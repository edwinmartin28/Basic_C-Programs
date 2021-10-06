#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,m,temp=0;
    float d;
    printf("Enter the first elements :");
    scanf("%d",&n);
    printf("Enter the second elements :");
    scanf("%d",&m);
    printf("The perfect square numbers between %d and %d : ",n,m);
    for(i=n;i<m;i++)
    {
        d = sqrt(i);
        temp=d;
        if(temp==d&&d!=0)
          printf("%d \t",i);
    }
    return 0;
}
