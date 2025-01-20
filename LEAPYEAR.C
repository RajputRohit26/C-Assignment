#include<stdio.h>
#include<conio.h>

void main()
{
     int year;
     clrscr();
     printf("\nEnter A Year : ");
     scanf("%d",&year);
     if(year%4==0||year%400==0||year%100==0)
     {
	printf("\nIs A Leap Year");
     }
     else
     {
     printf("\nIs Not A Leap Year");
     }
     getch();
}