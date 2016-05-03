//pascal triangle
#include <stdio.h>
//#include <conio.h>
int fact(int n)
{
	int i,r=1;
   for(i=n;i>0;i--)
   {
   	r+=r*n;
   }
   return r;
}

int main()
{
	int i,k,j,num=4,space=4;
   for(i=0;i<num;i++)
   {
      for(k=space;k>0;k--)
      {
      	printf(" ");
      }
      space--;
   	for(j=0;j<=i;j++)
   	{
   		printf("%d",fact(i)/(fact(j)*fact(i-j)));
         printf(" ");
   	}
   	printf("\n");
   }
return 0;
}
