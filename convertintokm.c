#include<stdio.h>
#include<conio.h>
void main()
{
   float km,m,f,i;
   printf("Please enter the distance b/w two cities in km:");
   scanf("%f",&km);
   m=km*1000;
   printf("\nmeter:%f",m);
   f=m*3;
   printf("\nfoot:%f",f);
   i=f*2.54;
   printf("\ninches:%f",i);
}
