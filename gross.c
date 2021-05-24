#include <stdio.h>
#include <conio.h>
int main()
{
	int gross,basic,allowances;
	printf("Please enter your Basic salary:");
	scanf("%d", &basic);
	printf("Please enter your allowances:");
	scanf("%d", &allowances);
	gross=basic+allowances;
	printf("Her's your total gross salary:%d",gross);
	return 0;
}
