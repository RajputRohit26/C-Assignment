#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
    double l,b,h,area,r;
    int choice;
    clrscr();
    printf("\n 1.rectangle");
    delay(1000);
    printf("\n 2.triangle");
      delay(1000);
    printf("\n 3.circle");
      delay(1000);
    printf("\n\nEnter Your Choice :  " );
    scanf("%d",&choice);

    switch(choice)
    {
	case 1:
		 delay(1000);
	       printf("\nEnter Length : ");
	       scanf("%lf",&l);
		 delay(1000);
	       printf("\nEnter Breadth : ");
	       scanf("%lf",&b);
		 delay(2000);
	       area=l*b;
	       printf("\nArea Of Rectangle is : %lf" ,area);
	       break;

	case 2:
		delay(1000);
	       printf("\nEnter Breadth : ");
	       scanf("%lf",&b);
		delay(1000);
	       printf("\nEnter Height : ");
	       scanf("%lf",&h);
		delay(2000);
	       area=0.5*b*h;
	       printf("\nArea Of Triangle is : %lf" ,area);
	       break;

	case 3:
	       delay(1000);
	       printf("\nEnter Radius : ");
	       scanf("%lf",&r);
		delay(2000);
	       area=3.14*r*r;
	       printf("\nArea Of Circle is : %lf" ,area);
	       break;
	}


    getch();
}
