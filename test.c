#include <stdio.h>
#include<string.h>
struct  stud
{
    int rollno;
    char name[50];
    float marks[2];
    float total;
    char grade;
};
int main()
{
    struct stud s[10],s1;
    int i,j,n=5;
    float sum=0.0;
    printf("\nEnter 5 student details");
    for(i=0;i<n;i++)
    {
        printf("\n %d student details",i+1);
        printf("\nEnter rollno :");
        scanf("%d",&s[i].rollno);
        printf("\nEnter name :");
        scanf("%s",s[i].name);
        sum=0;
        for(j=0;j<2;j++)
        {
            printf("\nEnter %d mark :",j+1);
            scanf("%f",&s[i].marks[j]);
            sum=sum+s[i].marks[j];
        }
        s[i].total=sum;
        if(s[i].total>=90)
          s[i].grade='O';
        else if(s[i].total>=80 && s[i].total <=89)
          s[i].grade='A';
        else if(s[i].total>=70 && s[i].total <=79)
          s[i].grade='B';
        else if(s[i].total>=60 && s[i].total <=69)
          s[i].grade='C';
        else if(s[i].total>=50 && s[i].total <=59)
          s[i].grade='D';
        else
          s[i].grade='F';
        
    }
    
    printf("\n\nPrinting student details......\n");
    for(i=0;i<n;i++)
    {
        printf("\nRollno\tName\t\tTotal\t\tGrade");
        printf("\n%d\t%s\t\t%f\t%c",s[i].rollno,s[i].name,s[i].total,s[i].grade);
    }
    
    printf("\n\nSorting records based on names.....");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(s[j].name,s[j+1].name)>0)
            {
                s1=s[j];
                s[j]=s[j+1];
                s[j+1]=s1;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("\nRollno\tName\t\tTotal\t\tGrade");
        printf("\n%d\t%s\t\t%f\t%c",s[i].rollno,s[i].name,s[i].total,s[i].grade);
    }
   
}


