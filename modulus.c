#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,mod;
	printf("please enter the first digit:");
	scanf("%d",&a);
	printf("please enter the second digigt:");
	scanf("%d",&b);
	mod = a%b;
	printf("modulus:%d",mod);
}
