#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c;
printf("enter the Range of the  fiboonic series \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=fib(i);
printf("%d\t",c);
getch();
}
fib(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return (fib(n-1)+fib(n-2)) ;
}
}