#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,i;
clrscr();
randomize();
n=rand()%100;
printf("%d",n);
printf("guess the number \n");
scanf("%d",i);
while(i!=n)
if(n>i)
{
printf("guess the larger no. \n");
scanf("%d",&i);
}
else if(n<i)
{
printf("guess the smaller no.\n");
scanf("%d",&i);
}
printf("you won");
getch();
}