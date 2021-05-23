#include <stdio.h>
#include <conio.h> 
void main ()
{
	int a , b , sum;
	printf("Please enter your first digit:");
	scanf("%d" , &a);
	printf("Please enter your second digit:");
	scanf("%d" , &b);
	sum = a+b;
	printf("Addition of both no.: %d", sum);
	return 0;
}
