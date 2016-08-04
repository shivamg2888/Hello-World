#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int i,level;
// program to implement Level Order Traversal in BST
struct node
{
	int data;
   struct node *lchild;
   struct node *rchild;
};
typedef struct node node;

int height(node *root)
{
   if(root==NULL)
   	return 0;
   else
   {
   	int lheight=height(root->lchild);
      int rheight=height(root->rchild);
      return lheight+rheight+1;
   }                                  
}

void printGivenLevel(node *root,int level)
{
	if(root==NULL)
   	{        //base / terminating condition of recursive call
   	  	return;
      }
   if(level==1)
   	{
   		printf("%d",root->data);
      }
   else if(level>1)
   {
   	printGivenLevel(root->lchild,level-1);
      printGivenLevel(root->rchild,level-1);
   }
}

void printLevelOrder(node *root)
{
	int h;
   h=height(root);
   for(i=1;i<=h;i++)
   {
   	printGivenLevel(root,i);
   }
}

void main()
{
	int num,n;
	node *temp=NULL,*head=NULL,*root=NULL,*prev=NULL;
	printf("how many nodes u want to insert in a tree\t");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	scanf("%d",&num);
      head=(node*)malloc(sizeof(node));
      head->data=num;
      head->lchild=NULL;
      head->rchild=NULL;
		if(root==NULL)
      {
      	root=temp=head;
      }
      else
      {
      	temp=root;
         while(temp!=NULL)
         {
      		if(temp->data<head->data)
         	{
         		prev=temp;
            	temp=temp->rchild;
         	}
         	else if(temp->data>head->data)
         	{
         		prev=temp;
            	temp=temp->lchild;
         	}
            else
            {
            	printf("Values are similar");
            	break;
            }
         }
         if(head->data<prev->data)
         {
         	prev->lchild=head;
         }
         else if(head->data>prev->data)
         {
         	prev->rchild=head;
         }
      }
   }
   printLevelOrder(root);
   getch();
}


