#include<stdio.h>
#include<conio.h>
int main()
{
	float p,r,t,si;
	printf("please enter your principal amount:");
	scanf("%f",&p);
	printf("please enter your Rate of Intrest:");
	scanf("%f",&r);
	printf("please enter your time of intrest:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Here's your simple interest:%f",si);
	return 0;
}
