#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("Enter the elements we want to find prime no:-");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("It is not the prime no.:-%d",n);
break;
}
if(i==n)
{
printf("it is prime no.:-%d",n);
}
getch();
}
}