#include<stdio.h>
#include<conio.h>
#include<string.h>

// sort all the characters of string

void main()
{
	int i;//j,c;
   char input[100],no[26]={0};
   puts("Enter the String: ");
   gets(input);

   for(i=0;i<26;i++)
   {
   	no[input[i]-'a']++;
   }

   for(i=0;i<26;i++)
   {
   	while(no[i]!='\0')
      {
      	printf("%c",('a'+i));
      	no[i]--;
      }
   }
   getch();
}