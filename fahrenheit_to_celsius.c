#include<stdio.h>
#include<conio.h>
int main ()
{
	float f,c;
	printf("Please enter the temperature in Fahrenheit scale:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Here's your converted temperature in celcius scale:%f ",c);
	return 0;
}
