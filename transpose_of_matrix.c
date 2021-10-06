//To find the transpose of the matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,row,col;
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
    printf("\n Transpose of the entered matrix is \n");
    for(i=0; i<col; i++)
    {
        printf("\n");
        for(j=0; j<row; j++)
        {
          printf("%d \t",a[j][i]);
        } 
    }   
    return 0;
    
}