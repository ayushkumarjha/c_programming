#include <stdio.h>
#include <conio.h>
int main ()
{
	float p,r,t,ci;
	printf("Please enter your Principal amount:");
	scanf("%f", &p);
	printf("Please enter your Rate of Interest:");
	scanf("%f", &r);
	printf("Please enter your Time of Interest:");
	scanf("%f", &t);
	ci=p*((1+r/100)*t)-p;
	printf("Her's your compound interest:%f",ci);
	return 0;
}
