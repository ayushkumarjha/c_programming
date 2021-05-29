#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	printf("The Quadratic equation is in the form of:(ax^2+bx+c=0)");
	printf("\nPlease enter the coefficient of a:");
	scanf("%d",&a);
	printf("Please enter the coefficient of b:");
	scanf("%d",&b);
	printf("Please enter the coefficient of c:");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	printf("Here's the value of  your D:%d",d);
	if(d==0)
	printf("\nHey!Dude your equation have only one real root");
	else if(d>0)
	printf("\nHey!Dude your equation have only two real root");
	else
	printf("\nHey!Dude your equation have only two complex root");
	e=(-b+sqrt(d))/(2*a);
	printf("\nHere's your first root of your equation:%d",e);
	f=(-b-sqrt(d))/(2*a);
	printf("\nHere's your Second root of your equation:%d",f);
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
	return 0;	
}
