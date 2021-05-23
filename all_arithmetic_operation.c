#include <stdio.h>
#include <conio.h>
int main()
{
	char e;
	double g;
	int a,b,c,d,f,h,i;
	printf("Here it will perform this operations (+,-,*,/,%)%c", e);
	printf("\nplease enter your first no.:");
	scanf("%d",&a);
	printf("please enter your second no.:");
	scanf("%d" , &b);
	c = a+b;
	printf("Here your addition result:%d" , c);
	d = a-b;
	printf("\nHere your substraction result:%d" , d);
    f = a*b;
    printf("\nHere your multiplication result:%d" , f);
	g = a/b;
	printf("\nHere your Division result:%lf" , g);
	h = a%b;
	printf("\nHere your modulus result:%d" , h);
	i =(a+b)/2;
	printf("\nHere your average result:%d",i);
    return 0;
}
