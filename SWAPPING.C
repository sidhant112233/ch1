#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,c;
	printf("Enter a value of a:");
	scanf("%d",&a);

	printf("Enter a value of b :");
	scanf("%d",&b );

	c=a;
	a=b;
	b=c;

	printf("\n answer of swapping b=%d",a);
	printf("\n answer of swipping a=%d",b);
	getch();
	}

