/* Read details of 5 Books ( Bookid,Title, Author Name, Price, No of copies)
   a. Display all the books whose price is above Rs. 500
   b. Display all books whose no of copies is less than 5
   c. List the books written by an Author */
#include<stdio.h>
#include<string.h>
struct book
{
    int book_id;
    char title[20];
    char author[20];
    int price;
    int no_of_copies;
}s[5];
int main()
{
    system("cls"); 
	  int i;
    printf("-------------------------------------------");
    for(i=1; i<=5; i++)
    {
     printf("\n \nEnter the details of book %d: ", i);
     printf("\nEnter the book id :");
     scanf("%d",&s[i].book_id);
     printf("\nEnter the title :");
     scanf("%*c%[^\n]",s[i].title);
     printf("\nEnter the author's name :");
     scanf("%*c%[^\n]",s[i].author);
     printf("\nEnter the price :");
     scanf("%d",&s[i].price);
     printf("\nEnter the number of copies :");
     scanf("%d",&s[i].no_of_copies);
     printf("-------------------------------------------");
    }
    printf("\nDisplay the name of all the books whose price is above Rs. 500 :");
    for(i=1;i<=5;i++)
    {
     if((s[i].price)>500)
      printf("%s\t",s[i].title);
    }
    printf("\nDisplay the name of all books whose no of copies is less than 5 :");
    for(i=1;i<=5;i++)
    {
     if((s[i].no_of_copies)<5)
      printf("%s\t",s[i].title);
    }
    char sh[20];
    printf("\nEnter the Authors name from the list :");
    printf("%s, %s, %s, %s, %s \n",s[1].author,s[2].author,s[3].author,s[4].author,s[5].author);
    scanf("%*c%[^\n]",sh);
    printf("\nList of books written by  %s :",sh);
    for(i=1;i<=5;i++)
    {
     if(strcmpi(s[i].author,sh)==0)
      printf("%s",s[i].title);
    }
    return 0;
}
  
