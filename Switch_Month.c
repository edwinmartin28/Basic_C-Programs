#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    switch(n)
    {
        case 1: printf("Jan");
                break;
        case 2: printf("Feb");
                break;
        case 3: printf("Mar");
                break;
        case 4: printf("Apr");
                break;
        case 5: printf("May");
                break;
        default: printf("Invalid Entery");  
    }
    return 0;
}
