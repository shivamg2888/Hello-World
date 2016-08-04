#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// program to identify that two trees are identical
struct node
{
	int data;
   struct node *left;
   struct node *right;
};
typedef struct node node;

node* newNode(int num)
{
	node *head=NULL;
   head=(node*)malloc(sizeof(node));
   head->data=num;
   head->left=NULL;
   head->right=NULL;
}

int isIdentical(node *root1,node *root2)
{
	if(root1==NULL && root2==NULL)
   	return 1;
   if(root1!=NULL && root2!=NULL)
   {
   	return
      (
      	root1->data==root2->data &&
         isIdentical(root1->left,root2->left) &&
         isIdentical(root1->right,root2->right)
      );
   }
   return 0;
}

void main()
{
	node *root1=NULL,*root2=NULL;

   root1=newNode(3);
   root1->left=newNode(4);
	root1->right=newNode(6);
	root1->left->left=newNode(5);
   root1->left->right=newNode(7);

   root2=newNode(3);
   root2->left=newNode(4);
	root2->right=newNode(6);
	root2->left->left=newNode(5);
	root2->left->right=newNode(8);

   if(isIdentical(root1,root2))
   {
   	printf("\nBoth trees are identical");
   }
   else
   {
   	printf("\nTrees are not identical");
   }
getch();
}
