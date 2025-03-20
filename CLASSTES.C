#include<stdio.h>
#include<conio.h>

void main()
{
    int a[5],i,j,temp;
    clrscr();
    for(i=0;i<5;i++)
    {
       printf("nEnter %d Element : ",i);
       scanf("%d",&a[i]);
    }
    printf("\nArray Elments Are\n");
    for(i=0;i<5;i++)
    {
       printf("\nA[%d] : %d",i,a[i]);
    }
     for(i=0;i<5;i++)
    {
       for(j=i+1;j<5;j++)
       {
	 if(a[i]>a[j])
	 {
	    temp=a[i];
	    a[i]=a[j];
	    a[j]=temp;
	 }
       }
    }
    printf("\nArray Element Are in Asscending Order :");
    getch();
}