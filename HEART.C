#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter the value :-");
scanf("%d",&n);
for(i=n/2;i<=n;i+=2)
{
 for(j=1;j<n-i;j+=2)
 {
 printf(" ");
 }
 for(j=1;j<=i;j++)
 {
 printf("*");
 }
  for(j=1;j<n-i;j++)
 {
 printf(" ");
 }
  for(j=1;j<=i;j++)
 {
 printf("*");
 }
}
getch();
}