#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
clrscr();
printf("enter the factorial of the value:\n");
scanf("%d",&n);
c=fact(n);
printf("factorial of the value: %d",c);
getch();
}
fact(int n)
{
if(n==1)
return 1;
else
return (n*fact(n-1)) ;
}