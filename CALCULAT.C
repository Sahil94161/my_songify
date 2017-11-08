#include<stdio.h>
#include<conio.h>
void main()
{
int sum1,sum2,total,n;
char option;
clrscr();
do{
printf("press 1 of button for addition\n");
printf("press 2 of button for substraction\n");
printf("press 3 of button for divsion\n");
printf("press 4 of button for multiplying\n");
scanf("%d",&n);
printf("plese enter the sum1 =");
scanf("%d",&sum1);
printf("plese enter the sum2=");
scanf("%d",&sum2);
switch(n)
{
case 1:total= sum1+sum2;
printf("addition of two number =%d",total);
break;
case 2:total=sum1-sum2;
printf("substraction of two number =%d",total);
break;
case 3:total=sum1/sum2;
printf("divison of two number =%d",total);
break;
case 4: total= sum1*sum2;
printf("multiplying of two number =%d",total);
break;
default:printf("wrong the input");
}
printf("\n do you want to continue Y/N\n");
option=getche();
}while(option=='y');
getch();

}
