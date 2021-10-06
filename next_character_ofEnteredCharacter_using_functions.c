/*Write a program to enter a character from user pass it to function,
and in function display the next character in alphabetical sequence.*/
#include<stdio.h>
void character(char c);
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    character(c);
    return 0;
}
void character(char c)
{
  printf("The next character in alphabetical sequence is ");
  c=c+1;
  printf("%c", c);
}
