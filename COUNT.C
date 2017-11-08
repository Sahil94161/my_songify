#include<stdio.h>
#include<conio.h>
void main()
{
long int n,b;
clrscr();
printf("enter any value");
scanf("%ld",&n) ;
for(b=0;n!=0;b++)
{
n=n/10;

}
printf("the count of no.is = %ld",b);
getch();
}