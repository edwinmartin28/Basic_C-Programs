//C program to display a star pyramid inversily.
#include <stdio.h>  
int main()  
{  
    system("cls"); 
    int row,m=1,j,k,i;  
    printf("Enter the number of rows :");  
    scanf("%d",&row);  
   for(i=row;i>=1;i--)  
   {  
       for(j=1;j<m;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<=2*i-1;k++)  
       {  
           printf("*");  
       }  
       m++;  
     
      printf("\n");  
    }  
    return 0;  
}  
