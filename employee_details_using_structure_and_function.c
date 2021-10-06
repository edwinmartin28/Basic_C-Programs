/*A structure of an employee and read details such as name,
 emp id, age, net salary and display the details*/
#include<stdio.h> 
struct employee
{
    char name[20];
    int emp_id;
    int age;
    int net_salary;
}s;
void details(struct employee s);
int main()
{
    printf("Enter the employee name :");
    scanf("%s",s.name);
    printf("Enter the Employee ID :");
    scanf("%d",&s.emp_id);
    printf("Enter the age :");
    scanf("%d",&s.age);
    printf("Enter the net salary :");
    scanf("%d",&s.net_salary);
    details(s);
    return 0;
}
void details(struct employee s)
{
    printf("\n \n Printing details of a employee....");
    printf("\n Name :%s \n Employee ID :%d \n Age :%d \n Net_salary :%d",s.name,s.emp_id,s.age,s.net_salary);
}
