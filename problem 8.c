#include<stdio.h>
#include<conio.h>
void swap(char*,char*);
void main()
{
	printf("swapping throw the pointers\n");
   char *p[2]={ "Hello" ,
   				"World"};
   swap(p[0],p[1]);
   printf("%s %s", p[0],p[1]);
   //printf("%s",s);
   getch();
}

void swap(char* t1, char* t2)
{
	char* t;
   t=t1;
   t1=t2;
   t2=t;
}
