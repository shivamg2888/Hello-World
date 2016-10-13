// wap to identfy the input no. is even or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
char* isEven(int input)
{
	if(input%2==0)
   	return "Yes";
   else
   	return "No";
}

int convert(char* input)
{
	return atoi(input);
}

void main()
{
	char ar[10]={"23","wed","434","45"};   //654',764};
   int ip;
   char* output;
   ip=convert(ar[1]);
   output=isEven(ip);
   printf("The output is: %s",output);
   getch();
}
