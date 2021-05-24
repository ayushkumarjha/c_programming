#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,b,c;
	float d;
	printf("Please enter your dividend:");
	scanf("%d", &a);
	printf("Please enter your divisor:");
	scanf("%d", &b);
	c = a%b;
	printf("Here's your remainder:%d",c);
	d=a/b;
	printf("\nHere's your quotient:%f",d);
	return 0;
}
