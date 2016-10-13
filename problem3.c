#include<stdio.h>
#include<conio.h>

void main()
{
	char s[]="1345";
   char temp;
   int i;
   temp=s[2];
   s[2]=s[3];
   s[3]=temp;
   for(i=0;i<=3;i++)
   {
		printf("%c",s[i]);
   }



getch();
}