#include<stdio.h>
#include<conio.h>

struct Employee
{
    int eid,eage;
    char ename[50],adr[100];

};
void main()
{
      int i;
      struct Employee e[5];
      clrscr();
      for(i=1;i<=5;i++)
      {
	  printf("\n\nEnter id : ");
	  scanf("%d",&e[i].eid);
	  fflush(stdin);

	  printf("\nEnter Employee Name : ");
	  scanf("%s",e[i].ename);
	  fflush(stdin);

	  printf("\nEnter Employee Age : ");
	  scanf("%d",&e[i].eage);
	  fflush(stdin);


	  printf("\nEnter Employee Address : ");
	  scanf("%s",e[i].adr);
	  fflush(stdin);

	  printf("\nEmployee Details : ");
	  printf("\n\nEmployee Id : %d",e[i].eid);
	  printf("\nEmployee Name : %s",e[i].ename);
	  printf("\nEmployee Age : %d",e[i].eage);
	  printf("\nEmployee Address : %s",e[i].adr);




      }
      getch();
}
