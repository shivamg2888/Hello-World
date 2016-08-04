#include <stdio.h>
#include <conio.h>
#include <malloc.h>

// program to implement Adjescency List Representation

struct adj
{
	char data;
   struct adj* p;
};
struct node
{
	char name;
   struct node* next;
   struct adj *ptr;
};

void main()
{
	//sabse pahle node create karni hai then uski adjecency list create karni hai
   struct adj *temp=NULL,*temp2=NULL;
   struct node *head=NULL,*pre=NULL,*first=NULL;
   char ch='y',nam,num;
   do
   {
   	printf("\nEnter the name of the node");
      scanf("%c",&nam);
      head=(struct node*)malloc(sizeof(struct node));
      head->name=nam;
      head->next=NULL;
      head->ptr=NULL;

      while(1)
      {
      	printf("\nAny edge connecting to this node");
         fflush(stdin);
         scanf("%c",&ch);
         if(ch=='y')
         {
         	temp=(struct adj*)malloc(sizeof(struct adj));
            puts("Enter the name of ajd. node");
            scanf("%c",&num);
            temp->data=num;
            temp->p=NULL;
            if(head->ptr==NULL)
            {
            	head->ptr=temp;
               temp2=temp;
            }
            else
            {
            	temp2->p=temp;
               temp2=temp;
            }
         }
         else
         {
         	break;
         }
      }

      if(first==NULL)
      {
      	first=pre=head;
      }
      else
      {
      	pre->next=head;
         pre=head;
      }
      fflush(stdin);
      puts("Any more NOdes");
      //scanf("%c",ch);
      ch=getch();
   }while(ch=='y');
getch();
}
