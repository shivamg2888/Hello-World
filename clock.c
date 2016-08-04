// calculate the angle between minut and hour hand
#include<stdio.h>
#include<conio.h>

void main()
{
	float num,h,m,min,hr;
   //int i,j;
   printf("\n Enter the time in  hour min ");
   scanf("%f%f",&h,&m);
   min=(360/60)*m;
   hr=(360/12)*(h+(m/60));
   printf("The angle between the min.hand and hr.hand is %f",hr-min);
   getch();
}

