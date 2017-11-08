#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,n,i;
initgraph(&gd,&gm,"C://TURBOC3//bgi");
setbkcolor(1);
printf("\n\t\t\t\t BANKING SYSTEM\n\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\tWELCOME TO OUR YOU LIMITED BANK\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4\t\t\t\t\t\t\4\n");
printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n\n");
rectangle(250,170,370,220);
rectangle(250,250,370,300);
rectangle(250,330,370,380);
gotoxy(32,13);
printf("1.Creat Account");
gotoxy(35,18);
printf("2.Login");
gotoxy(35,23);
printf("3.Exit");
printf("Enter the key (1-3):-");
cin>>n;
getch();
closegraph();
}