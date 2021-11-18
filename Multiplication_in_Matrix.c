//To find product 2 matrixs
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,row1,col1,row2,col2;
    printf("Enter the order of first matrix :");
    scanf("%d%d",&row1,&col1);
    printf("Enter the order of second matrix :");
    scanf("%d%d",&row2,&col2);
    if (col1==row2)
    {
     printf("Enter the Elements of first matrix :");
     for(i=0; i<row1; i++)
      for(j=0; j<col1; j++)
      {
         scanf("%d",&a[i][j]);
      }
     printf("Enter the Elements of second matrix :");
     for(i=0; i<row2; i++)
      for(j=0; j<col2; j++)
      {
         scanf("%d",&b[i][j]);
      }
     for(i=0;i<row1;i++)
      for(j=0;j<col2;j++)
      {
         c[i][j] =0;
         for(k=0;k<row2;k++)
          c[i][j] +=a[i][k]*b[k][j];
      }
     printf("products of the matrices:");
     for(i=0;i<row1;i++)
     {
        printf("\n");
        for(j=0;j<col2;j++)
        {
           printf("%d \t",c[i][j]);
        }    
     }
    } 
    else
     printf("\n Order of matrix is not sutable for multiplication");
    return 0;
}
