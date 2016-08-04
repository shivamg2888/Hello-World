#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// program to convert the tree to its mirror image
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

void inorder(node* root)
{
   if(root==NULL)
   	return;
	inorder(root->left);
   printf(" %d ",root->data);
   inorder(root->right);
}

void mirror(node *root)
{
	node* temp=NULL;
	if(root==NULL)
   	return;
   else
   {
   	mirror(root->left);
      mirror(root->right);
      temp=root->left;
      root->left=root->right;
      root->right=temp;
   }
}

void main()
{
	node *root=NULL;

   root=newNode(1);
   root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
   root->left->right=newNode(5);
	root->right->left=newNode(6);

   inorder(root);
   mirror(root);
   printf("\nmirror Image . . . \n\n");
   inorder(root);
getch();
}