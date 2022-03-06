//C program for Breadth First Search(Queue).
#include<stdio.h>
#include<stdlib.h>
int q[20],f=-1,r=-1,a[20][20],visited[20],i,j,p;
int bfs(int s,int n);
int Enqueue(int x);
int Dequeue();
int main() 
{
 system("cls");
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
    printf("Enter the vertex to start BFS  traversal : ");
    scanf("%d",&s); 
    bfs(s,n);
    printf("\nDo you want to continue (y/n):");
    scanf("%s",&c);
 }while(c =='Y'||c =='y'); 
 return 0;
}
int bfs(int s,int n) 
{
 printf("BFS Traversal : ");
 Enqueue(s); 
 visited[s]=1; 
 p=Dequeue();
 if(p!=0) 
   printf("%d ",p);
 while(p!=0)
 {
  for(i = 1;i <= n;i++)
   if(a[p][i]!=0 && visited[i]==0) 
   {
     Enqueue(i); 
     visited[i]=1;
   }p=Dequeue();
   if(p!=0) 
    printf("%d ",p);
 }
 for(i=1;i<=n;i++)
   if(visited[i] == 0) 
    bfs(i,n);
}
int Enqueue(int x) 
{
 if(r == 19)
    printf("Queue full!\n");
 else 
 {
    if(r==-1)
    {
        q[++r]=x;
        f++;
    }
    else 
        q[++r]=x;
 }
}
int Dequeue() 
{ 
 if(f>r || f==-1)
    return(0);
 else 
 { 
    p=q[f++]; 
    return(p);
 }
}