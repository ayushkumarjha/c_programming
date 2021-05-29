#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	printf("Please Put your First Digit/Number:");
	scanf("%d",&i);
	printf("Please Put your second Digit/Number:");
	scanf("%d",&j);
	if(i>j)
	printf("Hey Dude! Your maximum Digit/Number is:%d",i);
	else if(j>i)
	printf("Hey Dude! Your maximum Digit/Number is:%d",j);
	else
	printf("Hey Dude! Your Digit/Number is Same");
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
}
