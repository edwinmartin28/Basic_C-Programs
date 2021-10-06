// A menu driven program for performing matrix addition,multiplication and finding transpose 
#include<stdio.h>
void read(int [20][20],int ,int );
void sum(int [20][20],int [20][20],int ,int ,int ,int );
void product(int [20][20],int [20][20],int ,int ,int ,int );
void transpose(int [20][20],int ,int );
void display(int [20][20],int ,int);
int main()
{
    system("cls");
    char ch;
    int a[10][10],b[10][10],c[10][10],row1,col1,row2,col2,choice;
    n:
    printf("Matrix operations :");
    printf("\n1. Read a matrix \n2. Sum of two matrices \n3. Product of two matrices \n4. Transpose of a matrix");
    printf("\nEnter your choice :");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1: printf("\nEnter the order of matrix :");
                scanf("%d%d",&row1,&col1);
                read(a,row1,col1);
                printf("\nPrinting the matrix :");
                display(a,row1,col1);
                break;
        case 2: printf("\nEnter the order of first matrix :");
                scanf("%d%d",&row1,&col1);
                read(a,row1,col1);
                printf("\nEnter the order of second matrix :");
                scanf("%d%d",&row2,&col2);
                read(b,row2,col2);
                sum(a,b,row1,col1,row2,col2);
                break;
        case 3: printf("\nEnter the order of first matrix :");
                scanf("%d%d",&row1,&col1);
                read(a,row1,col1);
                printf("\nEnter the order of second matrix :");
                scanf("%d%d",&row2,&col2);
                read(b,row2,col2);
                product(a,b,row1,col1,row2,col2);
                break;
        case 4: printf("\nEnter the order of matrix :");
                scanf("%d%d",&row1,&col1);
                read(a,row1,col1);
                transpose(a,row1,col1);
                break;
        default: printf("\nInvalid Options");
    }
    printf("\n Do you wish to continue (press 'y' for yes or 'n' for no ) :");
    scanf("%s", &ch);
    if((ch=='y' || ch=='Y'))
     goto n;
    return 0;
}
void read(int a[20][20],int row,int col)
{
    int i,j;
    printf("\nEnter the Elements to matrix :");
     for(i=0; i<row; i++)
      for(j=0; j<col; j++)
      {
         scanf("%d",&a[i][j]);
      }
}
void sum(int a[20][20],int b[20][20],int row1,int col1,int row2,int col2)
{
  if(row1==row2&&col1==col2)
  {
      int i,j,c[20][20];
      for(i=0; i<row1; i++)
       for(j=0; j<col1; j++)
        c[i][j] =a[i][j]+b[i][j];
      printf("\nSum of the matrices :");
      display(c,row1,col1);
  }
  else 
   printf("\nOrder of the matrixs are not same");
}
void product(int a[20][20],int b[20][20],int row1,int col1,int row2,int col2)
{
    int i,j,k,c[20][20];
    if (col1==row2)
    {
     for(i=0;i<row1;i++)
      for(j=0;j<col2;j++)
      {
         c[i][j] =0;
         for(k=0;k<row2;k++)
          c[i][j] +=a[i][k]*b[k][j];
      }
    printf("\nProducts of the matrices:");
    display(c,row1,col2);
    }
    else 
     printf("\nOrder of matrix is not sutable for multiplication");
}
void transpose(int a[20][20],int row1,int col1)
{
    int i,j,c[20][20];
    printf("\nThe original matrix is \n");
    display(a, row1, col1);
    for(i=0; i<row1; i++)
     for(j=0; j<col1; j++)
     {
         c[j][i] =a[i][j];
     }
    printf("\nTranspose of the entered matrix is \n");
    display(c, row1, col1);
}
void display(int f[20][20],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        printf("\n");
        for(j=0;j<y;j++)
        {
           printf("%d \t",f[i][j]);
        }    
     }
}