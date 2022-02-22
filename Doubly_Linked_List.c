/* Implement Doubly Linked List Operations to perform the following 
   1. Create a student list to accept Roll No, Name and marks of 3 subjects and find total mark. 
   2. Insert elements into the list based on the total marks in descending order. 
   3. Delete all the data of a specific Roll No 
   4. Display the result.*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollno, m1, m2, m3, total;
    char name[20];
    struct student *llink, *rlink;
} * head, *temp, *ptr;
void insert();
void delete();
void display();
int main()
{
    int ch = 0;
    do
    {
        printf("Enter choice \n1.insert 2.delete 3.display 0.exit : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:insert();
               break;
        case 2:delete ();
               break;
        case 3:display();
               break;
        case 0:exit(0);
        default:printf("Invalid Choice!!");       
        }
        printf("\n");
    } while (ch != 0);
}
void insert()
{
    temp = NULL;
    ptr = (struct student *)malloc(sizeof(struct student));
    printf("Enter name :");
    scanf("%s", ptr->name);
    printf("Enter roll no :");
    scanf("%d", &ptr->rollno);
    printf("Enter mark 1 :");
    scanf("%d", &ptr->m1);
    printf("Enter mark 2 :");
    scanf("%d", &ptr->m2);
    printf("Enter mark 3 :");
    scanf("%d", &ptr->m3);
    ptr->total = ptr->m1 + ptr->m2 + ptr->m3;
    ptr->llink = NULL;
    ptr->rlink = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else if (head->total <= ptr->total)
    {
        ptr->rlink = head;
        head->llink = ptr;
        ptr->llink = NULL;
        head = ptr;
    }
    else
    {
        temp = head;
        while ((temp->rlink != NULL) && (temp->rlink->total >= ptr->total))
            temp = temp->rlink;
        if (temp->rlink != NULL)
        {
            temp->rlink->llink = ptr;
            ptr->rlink = temp->rlink;
        }
        else
            ptr->rlink = NULL;
        temp->rlink = ptr;
        ptr->llink = temp;
    }
}
void delete()
{
    int rn;
    printf("Enter roll no to be deleted : ");
    scanf("%d", &rn);
    if (head == NULL)
    {
        printf("List empty");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        if (temp->rollno == rn)
        {
            ptr = temp->rlink;
            if (head == NULL || temp == NULL)
                goto end;
            if (head == temp)
                head = temp->rlink;
            if (temp->rlink != NULL)
                temp->rlink->llink = temp->llink;
            if (temp->llink != NULL)
                temp->llink->rlink = temp->rlink;
            free(temp);
        end:
            temp = ptr;
        }
        else
            temp = temp->rlink;
    }
}
void display()
{
    if (head == NULL)
    {
        printf("No Records\n");
    }
    else{
     temp = head;
     int i = 1;
     printf("\n\tRANK LIST\n");
     while (temp != NULL)
     {
         printf("Rank   =%d\n",i++);
         printf("Roll No=%d\n",temp->rollno);
         printf("Name   =%s\n",temp->name);
         printf("Total  =%d\n\n",temp->total);
        temp = temp->rlink;
     }
    }
}
