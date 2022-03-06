//C program for Depth First Search(Stack).
#include<stdio.h>
#include<stdlib.h>
int top=-1,a[20][20],visited[20],s[20],i,j,k;
int dfs(int s,int n);
int push(int x);
int pop();
int main() 
{
 int n,s;
 char c;
 printf("Enter the number of vertices : ");
 scanf("%d", &n);
 printf("Enter the graph data in metrix form \n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
     scanf("%d",&a[i][j]);
 do 
 {
    for(i=1;i<=n;i++) 
     visited[i]=0;
    printf("Enter the vertex to start DFS  traversal : ");
    scanf("%d",&s); 
    dfs(s,n);
    printf("\nDo you want to continue (y/n):");
    scanf("%s",&c);
 }while(c =='Y'||c =='y');  
 return 0;
}
int dfs(int s,int n) 
{
 printf("DFS Traversal : ");
 push(s);
 visited[s]=1; 
 k=pop();
 if(k!=0) 
    printf("%d ",k);
 while(k!=0) 
 {
    for(i=1;i<=n;i++)
     if((a[k][i]!=0)&&(visited[i]==0)) 
     {
        push(i); 
        visited[i]=1;
     }k=pop();
     if(k!=0) 
      printf("%d ",k);
 }
 for(i=1;i<=n;i++)
   if(visited[i]==0) 
     dfs(i,n);
}
int push(int x)
{
 if(top==19)
    printf("Stack full!\n");
 else 
    s[++top]=x;
}
int pop()
{
 if(top==-1)
    return(0);
 else 
 { 
    k=s[top--];
    return(k);
 }
}
