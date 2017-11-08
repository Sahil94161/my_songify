#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num,pos,a[10];
clrscr();
printf("Enter the number of elements in the a:-");
scanf("%d",&n);
printf("\nEnter the valuees:-");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}


printf("\nEnter the number to be inserted:-");
scanf("%d",&num);
printf("\nEnter the position at which the number has to be added:-");
scanf("%d",&pos);
for(i=n;i>pos;i--)
{
a[i] =a[i-1];
}
a[pos]=num;
n++;
printf("\n The array after insertion of of %d is :-\n",num);
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
getch();
}