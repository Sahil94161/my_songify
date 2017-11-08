#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,r=0;
clrscr();
printf("Enter the number of terms:-");
scanf("%d",&n);
for(i=0;i<n;i++)
{

printf("\n%d",fib(r));
r++;
}
getch();
}
fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fib(n-1)+fib(n-2));
}