//C program to find the postfix expression from the given infix expression.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char stack[100],p[100];
int i,j,top=-1;
int Precedence(char ch);
int Check(char c[],int n);
int push(char ch);
int pop();
int main()
{
   char a[25];
   int l;
   printf("Enter a Infix Expression : ");
   scanf("%s",a);
   printf("Infix Expression : ");
   puts(a);
   l=strlen(a);
   Check(a,l);
  j=0;
  char item;
  for(i=0;i<l;i++)
  {
    if(isalpha(a[i]))
      p[j++]=a[i];
    else if(a[i]=='(')
      push(a[i]);
    else if(a[i]==')')
    {
      while((item=pop())!='(')
        p[j++]=item;
      printf("%c",p[i]);
    }
    else
    {
       while(Precedence(a[i])<=Precedence(stack[top]))
         p[j++]=pop();
       push(a[i]);
    }
  }
  while(top!=-1)
    p[j++]=pop();
  printf("\nPostfix Expression : ");
  for(i=0;i<l;i++) 
     printf("%c",p[i]);
  printf("\n");
  return 0;
}
int push(char ch)
{
   stack[++top]=ch;
}
int pop()
{
   char ch;
   ch=stack[top--];
   return ch; 
}
int Precedence(char ch)
{
  switch(ch)
 {
   case '+':return 1;
   case '-':return 1;
   case '*':return 2;
   case '/':return 2;
   case '^':return 3;
   case '(':return 0;
 }
}
int Check(char c[],int n)
  {
    int count=0;
    char ch[]="(^*/+-)";
    for(i=0;i<n;i++)
     {
       count=0;
       if(!(isalpha(c[i])))
        {
          for(j=0;j<7;j++)
           if(c[i]==ch[j])
            count++;
          if(count==0)
           {
            printf("Invalid Infix Expression\n");
            exit(0);
           }
        }
     }
  }
