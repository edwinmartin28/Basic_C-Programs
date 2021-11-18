/*c program to gathers the info of students.Details like name,rollno,marks and
 sort the order list according to their rank*/
#include<stdio.h>
struct student
{
 char name[20];
 int rollno;
 float mark[10];
 float total;
};
int main()
{
 system("cls");
 int num,i,j,sub;
 printf("Enter the number of students :");
 scanf("%d",&num);
 struct student s[num],temp;
 printf("\nEnter the number of subjects :");
 scanf("%d",&sub);
 printf("\nEnter the student details");
 for (i=0;i<num;i++)
 {
  printf("\n......................................");
  printf("\nEnter the details of student %d",i+1);
  printf("\nEnter the name :");
  scanf("%*c%[^\n]",s[i].name);
  printf("\nEnter the Roll No. :");
  scanf("%d",&s[i].rollno);
  printf("\nEnter the mark of %d subjects out of 100 ",sub);
  for(j=0;j<sub;j++)
  {
   printf("\n\tMark of subject %d :",j+1);
   scanf("%f",&s[i].mark[j]);
  }
  for(j=0;j<sub;j++)
  {
   s[i].total+=s[i].mark[j];
  }  
  system("cls");
 }
 for(i=0;i<num;i++)
  for(j=0;j<num-1-i;j++)
  {
      if(s[j].total<s[j+1].total)
      {
          temp=s[j];
          s[j]=s[j+1];
          s[j+1]=temp;
      }
  }
 printf("\nPrinting the student details in the order of ranking....");
 for (i=0;i<num;i++)
 {
  printf("\n......................................");
  printf("\nPrinting the details of student %d",i+1);
  printf("\nName:%s\nRoll No. :%d",s[i].name,s[i].rollno);
  
  for(j=0;j<sub;j++)
  {
   printf("\nMark %d:%f",j+1,s[i].mark[j]);
  }
  printf("\nTotal:%f",s[i].total);
 }
 return 0;
}











  
  
  
 
