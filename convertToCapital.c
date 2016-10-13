#include<stdio.h>
#include<conio.h>
void main()
{
	puts("\nConvert the string to uppercase letter string");
	char a[20], *b;
   int i=0;
   printf("\n Enter the string: ");
   gets(a);
   b=a;
   while((*b)!='\0')
   {
   	*b=*b-32;
      b++;
   }
   while(a[i]!='\0'){
   printf("%c",a[i]);
   i++;
   }
	getch();
}