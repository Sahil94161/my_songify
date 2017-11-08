#include<stdio.h>
#include<conio.h>
void main()
{
int i,d,j,a[10],n,temp;
clrscr();
printf("enter the element in array:- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
d=i ;
while(d>0&&a[d-1]>a[d])
{
temp=a[d-1];
a[d-1]=a[d];
a[d]=temp;
d--;

}
}
for(i=0;i<n;i++)
{
printf("\n %d",a[i]) ;
}
getch();
}