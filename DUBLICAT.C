#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,arr[10],n,k;
clrscr();
printf("enter the no. of array:");
scanf("%d",&n);
printf("enter the no.%d of dublicate of array",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n-i;j++)
{
if(arr[i]==arr[j])
{
for(k=j;k<n;k++)
{
arr[k]=arr[k+1];
}
}
}
}
n--  ;
printf("the updated of array:");
for(i=0;i<n;i++)
{
printf("%d\t",arr[k]);
}
getch();
}