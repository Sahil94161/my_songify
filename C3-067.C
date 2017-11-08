#include<stdio.h>
#include<conio.h>
void main()
{
int n,x;
clrscr();
printf("Enter the element:-");
scanf("%d",&n);
x=prime(n);
if(x==1)
{
printf("it is prime no:-%d",n);

}
else
printf("it is not is prime no.:-%d",n);
getch();
}
prime(int x)
{
int i;
for(i=2;i<x;i++)
{
if(x%i==0)
{
return 0;
break;
}
}
if(x==i)
{
return 1;
}
}

