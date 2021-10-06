#include<stdio.h>
#include<string.h>
struct names
{
 char name[25];
};
int main()
{
    system("cls");
    int i,j,stud;
    char temp[25];
    printf("Enter the number of students :");
    scanf("%d",&stud);
    struct names s[stud];
    printf("\nEnter the names ");
    for(i=0;i<stud;i++)
    {
     printf("\nName %d:",i+1);
     scanf("%*c%[^\n]",s[i].name);
    }
    system("cls");
    for(i=0;i<stud;i++)
     for(j=0;j<stud-1-i;j++)
     {
      if(strcmpi(s[j].name,s[j+1].name)>0)
      {
          strcpy(temp,s[j].name);
          strcpy(s[j].name,s[j+1].name);
          strcpy(s[j+1].name,temp);
      }
     }
    printf("\nPrinting the sorted names list...");
    for(i=0;i<stud;i++)
    {
     printf("\nName %d:%s",i+1,s[i].name);
    }
    return 0;
}