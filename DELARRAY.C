#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[3][3];
clrscr();
printf("enter the elements of array:\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
scanf("\t%d",&a[i][j]);
}
}
printf("matric of array:\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d\t",a[i][j]) ;
}
}
getch();
}