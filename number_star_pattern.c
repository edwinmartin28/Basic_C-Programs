//C program to generate the number star pattern.
#include<stdio.h>  
int main()  
{  
    int row,i,j;  
    printf("Enter the number of rows :");  
    scanf("%d",&row);  
   for(i=1;i<=row;i++)  
   {  
       for(j=1;j<=(row-i+1);j++)  
           printf(" ");   
       for(j=1;j<=i;j++)   
         printf("%d ",i);    
      printf("\n");  
    }  
    return 0;  
}
