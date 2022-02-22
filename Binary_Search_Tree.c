//C program to implement Binary Search Tree Traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lchild,*rchild;
}*root=NULL,*ptr;
void insert(int item);
void preorder(struct node *ptr);
void inorder(struct node *ptr);
void postorder(struct node *ptr);
int main()
{
	int n,a[20];
	printf("\nEnter number of elements in BST : ");
	scanf("%d",&n);
	printf("\nEnter the elements : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	 insert(a[i]);
	printf("\nPreorder  : ");
	preorder(root);
	printf("\nInorder   : ");
	inorder(root);
	printf("\nPostorder : ");
	postorder(root);
	return 0;
}
void insert(int item)
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->lchild = temp->rchild = NULL;
	if(root==NULL)
		root=temp;
	else
		ptr=root;
	while(ptr!=NULL)
	{
		struct node *parent=ptr;
		if(item < ptr->data)
		{
			ptr = ptr->lchild;
			if(ptr==NULL)
				parent->lchild = temp;
		}	
		else
		{
			ptr = ptr->rchild;
			if(ptr==NULL)
				parent->rchild = temp;
		}
	}
}
void preorder(struct node *ptr)
{
    if(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		preorder(ptr->lchild);
		preorder(ptr->rchild);	
	}
}
void inorder(struct node *ptr)
{
    if(ptr!=NULL)
	{
        inorder(ptr->lchild);
		printf("%d ",ptr->data);
		inorder(ptr->rchild);	
	}
}
void postorder(struct node *ptr)
{
    if(ptr!=NULL)
	{
		postorder(ptr->lchild);
		postorder(ptr->rchild);	
		printf("%d ",ptr->data);
	}
}

