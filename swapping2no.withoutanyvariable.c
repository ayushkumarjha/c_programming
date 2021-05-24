#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Please enter your first digit:");
	scanf("%d",&a);
	printf("Please enter your first digit:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Here's your swapping no.:%d%d",a,b);
	return 0;
}
