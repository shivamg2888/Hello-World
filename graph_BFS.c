#include <stdio.h>
#include <conio.h>

// program to BFS traversal in Graph
int visited[4];
int queue[4],front=-1,rear=-1;

void insert(int data)
{
	if(front==4)
   {
   	return;
   }
	else if(front==-1)
   {
   	front=0;
      rear=0;
   }
   else
   {
   	rear++;
   }
   queue[rear]=data;
   printf("%d",queue[data]);
}

int delete()              //declaration terminated incorrectly
{
	int b;
   if(front>rear)
   {
   	front=rear=-1;
      return;
   }
	else if(front==-1)
   {
   	return;
   }
   else
   {
   	b=queue[front];
   	front++;
   }
   return b;
}

void main()
{
	int val,i;
	int a[][4]={{0,1,0,1},
   				{0,0,1,1},
               {0,0,0,0},
               {1,0,1,1}};
   for(i=0;i<4;i++)
   {
   	visited[i]=0;
   }
   insert(0);
   visited[0]=1;
   while(rear!=-1)
   {
   	val=delete();
   	for(i=0;i<4;i++)
      {
      	if(a[val][i]!=0 && visited[i]!=1)
         {
      		insert[i];
         	visited[i]=1;
      	}
   	}
   }
getch();
}