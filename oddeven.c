#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("Please enter a number which you want to check:");
	scanf("%d",&i);
	if(i%2==0)
	printf("Hey Dude it's an even number...");
	else
	printf("Boss it's an odd number...");
	printf("\nIf u got your result please press enter & u may exit..");
	getch();
	return 0;
}
