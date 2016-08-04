#include<stdio.h>
#include<conio.h>
#include<malloc.h>
//implementing stack using linkedlist
struct node
{
	int data;
   struct node *ptr;
};

void main()
{
   typedef struct node node;
   int a;
   char n;
   node *temp=NULL,*p=NULL;
   do
   {
   printf("\nEnter your choice(1,2,3): ");
   scanf("%d",&a);
   if(a==1)
   {
   	temp=(node*)malloc(sizeof(node));
      puts("Enter the number ");
      scanf("%d",&temp->data);
      temp->ptr=NULL;
      if(p==NULL)
      {
      	p=temp;
      }
      else
      {
         temp->ptr=p;
         p=temp;
      }
   }
   else if(a==2)
   {
   	printf("\nDeleted element is %d ",p->data);
      p=p->ptr;
      //free(temp);
   }
   else
   {
   	while(p!='\0')
      {
      	printf("\t%d",p->data);
         p=p->ptr;
      }
   }
   fflush(stdin);
   printf("\nDo u want more options ");
   scanf("%c",&n);
   }while(n=='y');
   getch();
}