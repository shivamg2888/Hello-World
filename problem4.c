#include <stdio.h>
#include <conio.h>
void EmpRevSalary(int id,char* name,int sal,char a);
//struct node{

void main()
{
	int sal,id;
   char* name;
   char a;
   printf("Enter the Employee information\n");
   scanf("%d %s %d %c",&id,&name,&sal,&a);			// imp use space bw addresses %

   EmpRevSalary(id,name,sal,a);
   getch();
}

void EmpRevSalary(int id,char* name,int sal,char rate)
{
	if(rate=='A')
   {
   	sal+=(sal*3)/10;
   }
   else if(rate=='B')
   {
   	sal+=(sal*25)/100;
   }
   else if(rate=='C')
   {
   	sal+=sal/10;
   }
   else if(rate=='Z')
   {
   	sal+=sal/100;
   }
   else
   {
   	printf("\nplease enter valid rating");
   }
   printf("\nafter increment\t%d",sal);
}
