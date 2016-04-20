/*# Hello-World
This is my first Repository */
// WAP to reverse a string through Stack
#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=-1;
char stack[20];
void push(char c);
char pop();

void main()
{
	char a[20];
   int len,i;
   printf("\nInput a string");
   gets(a);
   len=strlen(a);

   for(i=0;i<=len;i++)
   {
   	push(a[i]);
   }

   while(top>=0)
   {
   	printf("%c",pop());
   }
getch();
}

void push(char n)
{
	if(top==20)
   {
      printf("\nStack Overflow");
   }
   else
   {
   	top++;
      stack[top]=n;
   }
}

char pop()
{
	char ch=stack[top];
	top--;
   return ch;
}
