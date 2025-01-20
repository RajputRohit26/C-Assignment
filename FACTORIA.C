#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
       int n,fact=1,i;
       clrscr();
       printf("\nEnter Any Number : " );
       scanf("%d",&n);
       for(i=1; i<=n; i++)
       {
	    fact=fact*i;
       }
       printf("\nFactorial Of A Number : %d",fact);
       getch();
}


