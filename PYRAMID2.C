#include<stdio.h>
#include<conio.h>

void main()
{
     int i,j,n=1;
     clrscr();
     for(i=0;i<4;i++)
     {
	for(j=0;j<=i;j++)
	{
	   printf(" %d",n++);
	}
     printf("\n");
     }
     getch();
}