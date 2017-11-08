#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,r;
printf("enter any number:-");
scanf("%d",&r);
printf("fib. series:-\n%d\n%d",a,b);
fib(r,a,b);
getch();
}
fib(int r,int a,int b)
{
int n;
n=a+b;
if(n>r)
return 0;
else
{
printf("%d",n);
fib(r,b,n);
}
}