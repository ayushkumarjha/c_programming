#include<stdio.h>
#include<conio.h>
void main()
{
  //it will find the maximum digit in three entrys...
	int i,j,k;
	printf("Please Put your First Digit/Number:");
	scanf("%d",&i);
	printf("Please Put your second Digit/Number:");
	scanf("%d",&j);
	printf("Please Put your second Digit/Number:");
	scanf("%d",&k);
	if((i>j) && (i>k))
	printf("Hey Dude! Your maximum Digit/Number is:%d",i);
	else
	if((j>i) && (j>k))
	printf("Hey Dude! Your maximum Digit/Number is:%d",j);
	else
	if ((k>i) && (k>j))
	printf("Hey Dude! Your maximum Digit/Number is:%d",k);
	else
	printf("Hey Dude! Your Digit/Number is Same");
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
    return 0;
}
