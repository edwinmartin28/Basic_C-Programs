//Check wheather a given character entered  is in small case or not using functions.
#include<stdio.h>
#include<ctype.h>
void smallcase(char a);
int main()
{
    system("cls");  
    char a;
    printf("Enter a character :");
    scanf("%c", &a);
    smallcase(a);
    return 0;
}
void smallcase(char a)
{
    if(islower(a))
     printf("The character is in the lower case");
    else
     printf("The character is not in the lower case");
}