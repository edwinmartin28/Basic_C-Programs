//To find the column sum of matrix
#include<stdio.h>
int main()
{
    system("cls");  
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
         sum[j] += a[i][j];
     }
    printf("\nColumn sum of the matrix is \n");
    for(j=0; j<col; j++)
    {
        printf(" %d \t",sum[j]);
    }
    return 0;
}