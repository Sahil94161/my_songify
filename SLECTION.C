#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[10],n,temp;
clrscr();
printf("enter the element in array:- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("\n %d",a[i]) ;
}
getch();
}