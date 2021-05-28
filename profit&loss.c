#include<stdio.h>
#include<conio.h>
void main()
{
	int cp,sp,profit,loss;
	printf("Please Enter Your Cost Price:");
	scanf("%d",&cp);
	printf("Please Enter Your Selling Price:");
	scanf("%d",&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(profit>loss)
	{
	printf("congratulation! Dude you have earn profit");
	printf("\nHere's your profit amount:%d",profit);
}
	else
	if(loss>profit)
	{	
	printf("opps! Dude you have got loss");
	printf("Here's your loss amount is:%d",loss);
}
    else
   printf("Your Selling & Cost price is Same");
   printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
    return 0;
}
