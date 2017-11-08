#include<stdio.h>
#include<conio.h>
void call_by(float *area)
{
int r;
printf("enter the radius");
scanf("%d",&r);
*area=3.14*r*r;
}
void main()
{
float area;
clrscr();
call_by(&area);
printf("%f",area);
getch();
}
