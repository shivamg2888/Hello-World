// To find the 2nd highest no. from an array
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[20],i,j=1,n,pos,h,sh;
   printf("Enter the size of an array\t");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }

   //sorting
   for(i=0;i<n;i++)
   {
   	h=a[i];
      while(j!=n)
      {
      	if(h<a[j])
         {
         	h=a[j];
            pos=j;
         }
			j++;
      }
      h=a[pos];
   }
   i=0;

   	sh=a[i];
   	for (j=i+1;j<n;j++)
      {
      	if(sh<a[j] && a[j]!=h)
         {
         	sh=a[j];
         }

      }

   printf("highest value=%d \n second higest=%d",h,sh);
   getch();
}

