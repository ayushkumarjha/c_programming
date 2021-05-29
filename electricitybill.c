#include<stdio.h>
#include<conio.h>
int main()
{
	float bill, unit;

	printf("Enter the units consumed=");
	scanf("%f",&unit);

	if(unit<100)
	{
		bill=unit*2.25;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(unit>=100 && unit<200)
	{
		bill=unit*3.00;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else if(unit>=200 && unit<500)
	{
		bill=unit*4.25;
		printf("Electricity Bill=%f Rupees",bill);

	}

	else if(unit>=500)
	{
		bill=unit*7.00;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
     printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
     getch();
	return 0;
}
