#include<stdio.h>
#include<conio.h>
void main()
{
int n,x;
clrscr();

printf("Enter the element:-");
scanf("%d",&n);

x=prime(n,n/2);
if(x==1)
{
printf("it is prime no:-%d",n);

}
else
printf("it is not is prime no.:-%d",n);
getch();
}
prime(int x,int i)
{
if(i==1)
{
return 1;
}
else
{
if(x%i==0)
{
return 0;
}
else
return prime(x,i-1);
}

}