#include<stdio.h>
int main()
  {
    int a[10][10],p,q,i,j;
    printf("Enter the row range :");
    scanf("%d",&p);
    printf("Enter the column range :");
    scanf("%d",&q);
    printf("Start entering the matrix :");
    for(i=0;i<p;i++)
     for(j=0;j<q;j++)
      scanf("%d",&a[i][j]);
    puts("\nUpper Matrix=");
    for(i=0;i<p;i++)
     {
       for(j=0;j<q-i;j++)
        printf("%d ",a[i][j]);
       puts("\n");
     }
    return 0;
  }