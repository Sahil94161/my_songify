#include<stdio.h>
#include<conio.h>
void swap_cal_by_val(int i,int j)
{
int temp;
temp=i;
i=j;
j=temp;
}

void swap_cal_by_ref(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

void main()
{
int i,j;
clrscr();
i=10;
j=15;
printf("i = %d\nj = %d",i,j);
swap_cal_by_val(i,j);
printf("\ni = %d\nj = %d",i,j);
swap_cal_by_ref(&i,&j);
printf("\ni = %d\nj = %d",i,j);
getch();
}