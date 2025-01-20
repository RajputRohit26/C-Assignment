#include<stdio.h>
#include<conio.h>

void main()
{
     long num,rev_Num=0,remainder;
     clrscr();
     printf("\nEnter the number to reverse : ");
     scanf("%ld",&num);
     while(num!=0)
     {
	remainder = num%10;
	rev_Num=rev_Num*10+remainder;
	num=num/10;
     }
     printf("\nThe reversed number is %ld",rev_Num);
     getch();
}
