#include<stdio.h>
#include<conio.h>
void main()
{
	int bs,hrs,da,ta,gs;
	clrscr();

	printf("\n Enter value of bs :" );
	scanf("%d",&bs);

	printf("\n Enter value of hrs : ");
	scanf("%d",&hrs);

	printf("\n Enter value of da :");
	scanf("%d",&da);

	printf("\n Enter value of ta :");
	scanf("%d",&ta);

	hrs=(bs*hrs)/100;
	da=(bs*hrs)/100;
	ta=(bs*hrs)/100;
	gs=(bs*hrs)/100;

	printf("\n gross salary of %d",gs);
	getch();
	}




