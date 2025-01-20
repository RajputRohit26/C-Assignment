#include<stdio.h>
#include<conio.h>

void main()
{
    int n,cube,square;
    clrscr();
    printf("Enter N : ");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("\nSquare of N : %d" ,square);
    printf("\nCube of N : %d",cube);
    getch();
}
