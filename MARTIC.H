#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,sum,per;
clrscr();
printf("enter the number of eng:\n");
scanf("%d",&a);
printf("enter the number of hin:\n");
scanf("%d",&b);
 printf("enter the number of mathe:\n");
scanf("%d",&c);
printf("enter the number of phy:\n");
scanf("%d",&d);
printf("enter the number of che:\n");
scanf("%d",&e);
sum=a+b+c+d+e;
per=sum/5;
printf("the total of all subjects =%d\n",sum);
printf("the total of all subjects per =%d\n",per);
if(per>70)
printf("the student is martic");
else
if(per>60&&per<70)
printf("the student is first divsion");
else
if(per>50&&per<60)
printf("the student is passed");
else
printf("the student is fail");
getch();
}