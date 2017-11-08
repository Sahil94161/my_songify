#include<stdio.h>
#include<conio.h>
void main()
{
int j,i;
clrscr();
for(i=3;i<=100;i++)
{
for(j=2;j<=i-1;j++)
{
if (i%j==0)
break;
}
}
if(j==i)
{
printf("the num is prime ");
}
else
{
 printf("the num is not prime ");
}

getch();
}