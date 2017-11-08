#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,k;
printf("Enter th elements:-\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
sacnf("\t%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("\t%d",a[i][j]);
}
}
getch();
}