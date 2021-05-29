#include<stdio.h>
#include<conio.h>
void main()
{
	int maths,physics,english,hindi,ip,chemistry;
	float a;
	printf("Please Enter your Mathematics marks:");
	scanf("%d",&maths);
	printf("Please Enter your Chemistry marks:");
	scanf("%d",&chemistry);
	printf("Please Enter your Physics marks:");
	scanf("%d",&physics);
	printf("Please Enter your Hindi marks:");
	scanf("%d",&hindi);
	printf("Please Enter your English marks:");
	scanf("%d",&english);
	printf("Please Enter your IP/PHE marks:");
	scanf("%d",&ip);
	a=(maths+chemistry+physics+hindi+english+ip)*100/500;
	printf("Here's your percantage result in:%f",a);
}
