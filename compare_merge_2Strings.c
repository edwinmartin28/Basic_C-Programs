#include<stdio.h>
#include<string.h>
int main()
{
    system("cls"); 
    char a[30],b[30],c;
    int d;
    printf("Enter a first word : ");
    gets(a);
    printf("Enter a second word : ");
    gets(b);
    d=strcmp(a,b);
    if(d==0)
    {
        printf("Both the words are same ");
    }
    else if(d<0)
    {
        strcat(a,b);
        puts( a);
    }
    else if(d>0)
    {
         strcat(b,a);
         puts( b);
    }
    else 
      printf("Wrong Input");
    return 0;

}

