#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	printf("Please enter your first digit:");
	scanf("%d",&a);
	printf("Please enter your second digit:");
	scanf("%d",&b);
	temp=b;
	b=a;
	a=temp;
	printf("your swapped no.:%d%d", a,b);
	return 0;
}
