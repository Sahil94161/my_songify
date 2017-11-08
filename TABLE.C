#include<stdio.h>
#include<conio.h>
void main()
{
int j,b,n,c;
printf("enter the table");
scanf("%d",&n);
for(b=1;b<=10;b++)
{
c=t(n,b);
printf("%d*%d=%d",n,b,c);
}
getch();
}
t(int x,int y)
{
int d;
f=x*y;
return f;
}