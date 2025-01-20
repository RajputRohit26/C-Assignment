#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float p,r,t,si,ci,a;
    clrscr();
    printf("\nEnter P : ");
    scanf("%f",&p);
    printf("\nEnter R : ");
    scanf("%f",&r);
    printf("\nEnter T : ");
    scanf("%f",&t);

    si=p*r*t/100;
    printf("\Enter SIMPLE INTEREST = %f",si);

    a=p*((pow((1+r/100),t)));
    ci=a-p;
    printf("\nCOMPOUND INTEREST = %lf",ci);
    getch();
}