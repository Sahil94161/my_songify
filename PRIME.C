#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
printf("enter the num");
scanf("%d",& num);
for(i=2;i<=num-1;i++)
{
if (num%i==0)
break;
}
if(i==num)
{
printf("the num is prime ");
}
else
{
 printf("the num is not prime ");
}
getch();
}