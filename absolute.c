#include<stdio.h>
#include<conio.h>
void main()
{
	//absolute means modulus|-1|=1 of any number
	int i;
	printf("Please enter a number which you want to check:");
	scanf("%d",&i);
	if(i<0)
	{
	i*=-1;
	printf("Her's your absoulte value:%d",i);
}
else
{
	printf("Here's your absoulte value:%d",i);
	}
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
        getch();
	return 0;
}
