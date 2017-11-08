#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,n,a;
char ch;
clrscr();
printf("\n enter the value = ");
scanf("%d",&n);
while(n>0)
{
a=n%10;
sum=sum*10+a;
n=n/10;
}
printf("\n sum =%d",sum);
if (sum==n)
printf("\nthe no is pallidrome");
else
printf("the no is not pallidrome") ;
getch();
}