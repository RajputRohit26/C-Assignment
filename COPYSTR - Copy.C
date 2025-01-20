#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
     char *s1,*s2;
     clrscr();
     printf("\nEnter String 1 : ");
     gets(s1);
     strcpy(s2,s1);
     printf("\nAfter Copied String : %s");
     getch();
}