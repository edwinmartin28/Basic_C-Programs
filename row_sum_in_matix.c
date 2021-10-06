//To find the row sum of matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,row,col,sum[10]={0};
    printf("Enter the order of matrix :");
    scanf("%d%d",&row,&col);
    printf("Enter the Elements :\n");
    for(i=0; i<row; i++)
     for(j=0; j<col; j++)
     {
         scanf("%d",&a[i][j]);
     }
    printf("The original matrix is \n");
    for(i=0; i<row; i++)
    {
        printf("\n");
        for(j=0; j<col; j++)
        {
          printf("%d \t",a[i][j]);
        }
    }
    for(i=0; i<row; i++)
     for(j=0; j<col; j++)
     {
         sum[i] += a[i][j];
     }
    printf("\n Row sum of the matrix is \n");
    for(i=0; i<row; i++)
    {
        printf(" %d \n",sum[i]);
    }
    return 0;
}