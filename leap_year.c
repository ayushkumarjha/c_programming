#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Please Enter a Year:");
	scanf("%d",&num);
	if (num%4==0)
	printf("Hey!Dude It's an Leap Year");
	else
	printf("Hey!Dude It's an Sidereal Year");
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
}
