#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{

int gd=DETECT,gm,i,n,c;
char a[50];
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
printf("Enter number of second left:-");
scanf("%d",&n);
settextstyle(7,HORIZ_DIR,5) ;
for(i=n;i>0;i--)
{
setcolor(7);
sprintf(a,"New Year in %d Second ",i);
outtextxy(10,210,a);
delay(1000);
cleardevice();
}
settextstyle(10,HORIZ_DIR,4);
c=getmaxcolor();
for(i=0;i<=c;i++)
{
setcolor(i);
outtextxy(30,200,"HAPPY NEW YEAR :-)");
delay(1000);
}
getch();
closegraph();

}