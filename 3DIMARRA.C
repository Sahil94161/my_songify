#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[3][3][3];
clrscr();
printf("Enter the elements:\n");
for(k=0;k<=2;k++)
{
printf("\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
scanf("%d",&a[k][i][j]);
}
}
}
for(k=0;k<=2;k++)
{
printf("\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d\t",a[k][j][i]);
}
}
}
getch();
}