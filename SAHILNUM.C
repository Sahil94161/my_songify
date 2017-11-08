#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b,c,d,e,n,sum;
printf("enter the five digit elements");
scanf ("%d",&n);
a=(n/10000)+1;
b=((n/1000)%10)+1;
c=((n/100)%10)+1;
d=((n/10)%10)+1;
e=(n%10)+1;
sum= (a*10000)+(b*1000)+(c*100)+(d*10)+e;
printf("the valuel%d",sum);
getch();
}