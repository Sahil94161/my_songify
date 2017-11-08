#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,n;
clrscr();
textbackground(4);
printf("enter the value\n");
scanf("%d",&n);
a=0;
b=1;

printf("%d\n%d",a,b);
for(i=0;i<n;i++)
{
i=a+b;
printf("\n%d",i);
a=b;
b=i;
}
getch();


}