//C program to check whether the entered alphabet is a consonant or not using
#include <stdio.h>
int main()
{
    system("cls"); 
    char a;
    printf("Please Enter an alphabet:");
    scanf(" %c", &a);
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
     printf("The given character is not a consonant\n");
    else
     printf("The given character is a consonant\n");
    return 0;
}
