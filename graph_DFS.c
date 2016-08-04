#include <stdio.h>
#include <conio.h>

// program to DFS of Graph --edge traversal

int visited[4];
int stack[4],top=-1;

void push(int data)
{
	if(top==4)
   {
   	return;
   }
   else
   {
   	stack[++top]=data;
      printf("%d",data);
   }
}

int pop()
{
	int b;
   if(top==-1)
   {
   	return 0;
   }
   else
   {
   	b=stack[top];
      top--;
   	return b;
   }
}

void main()
{
	int val,i,found=0;
	int a[][4]={{0,1,0,1},
   				{0,0,1,1},
               {0,0,0,0},
               {1,0,1,1}};
   for(i=0;i<4;i++)
   {
   	visited[i]=0;
   }
   push(0);
   visited[0]=1;
   while(top!=-1)
   {
   	val=stack[top];
      for(i=0;i<4;i++)
      {

      	if(a[val][i]!=0 && visited[i]!=1)
      	{
      		found=1;
         	visited[i]=1;
         	push(i);
         	break;
         }
      }
      if(found==1)
      {
      	pop();
      }
   }
getch();
}