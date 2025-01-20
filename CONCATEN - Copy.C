#include<stdio.h>
#include<conio.h>

void main()
{
      char *s1, *s2;
      clrscr();
      printf("\nEnter String 1 : ");
      gets(s1);
      printf("\nEnter String 2 : ");
      gets(s2);
      strcat(s1,s2);
      printf("\nAfter Concatenate :%s " ,s1,s2);
      getch();
}

