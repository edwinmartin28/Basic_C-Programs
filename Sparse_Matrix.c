#include<stdio.h>
void sparse_matrix(int a[10][10],int row,int col);
void transpose_sparse(int b[10][10],int n);
void display(int x[10][10],int y);
int main()
{
  int a[10][10],row,col,i,j,c[10][10];
  printf("Enter the order of the matrix :");
  scanf("%d%d",&row,&col);
  printf("Enter the matrix:");
  for(i=0;i<row;i++)
   for(j=0;j<col;j++)
   {
    scanf("%d",&a[i][j]);
   }
  printf("Entered Matrix:\n");
  for(i=0;i<row;i++)
  {
   printf("\n");
   for(j=0;j<col;j++)
   {
    printf("%d\t",a[i][j]);
   }
  }
  sparse_matrix(a,row,col);
  return 0;
}
void sparse_matrix(int a[10][10],int row,int col)
{
 int i,j,n=0,b[10][10];
 for(i=0;i<row;i++)
  for(j=0;j<col;j++)
  {
   if(a[i][j]!=0)
   {
    n++;
    b[n][0]=i;
    b[n][1]=j;
    b[n][2]=a[i][j];
   }
  }
 b[0][0]=row;
 b[0][1]=col;
 b[0][2]=n;
 printf("\nSparse Matrix :\n");
 display(b,n);
 transpose_sparse(b,n);
}
void display(int b[10][10],int n)
{
  int i,j;
  for(i=0;i<=n;i++)
  {
   printf("\n");
   for(j=0;j<3;j++)
   {
    printf("%d \t",b[i][j]);
   }
  }
}
void transpose_sparse(int b[10][10],int n)
{
    int a[10][10],k=0,i,j;
    for(i=0;i<=n;i++)
     {
       for(j=1;j<=n;j++)
        {
          if(b[j][1]==i)
           {
             k++;
             a[k][0]=b[j][1];
             a[k][1]=b[j][0];
             a[k][2]=b[j][2];
           }
        }
     }
    a[0][0]=b[0][1];a[0][1]=b[0][0];a[0][2]=b[0][2];
    printf("\nAfter Transpose:\n");
    display(a,n);
}