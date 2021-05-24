#include <stdio.h>
#include <conio.h>
int main()
{
	const float pi =3.14;
	float a,b;
	printf("Please enter the radius of circle:");
	scanf("%f",&a);
	b=pi*a*a;
	printf("Here's the area of circle:%f",b);
	return 0;
}
