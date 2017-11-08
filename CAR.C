#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,n,i;
initgraph(&gd,&gm,"C://TURBOC3//bgi");
n=getmaxx();
for(i=0;i<n;i++)
{
// Road
setcolor(4);
line(0,370,n,370);
//sun
setcolor(15);
circle(80+i,80,50);
setfillstyle(1,YELLOW);
floodfill(80+i, 80, WHITE);
//vcr games road
setcolor(15);
rectangle(525,250,535,370);
setfillstyle(2,BROWN);
floodfill(527, 252, WHITE);
rectangle(480,200,580,250);
setfillstyle(3,7);
floodfill(482, 202, WHITE);
outtextxy(490,220,"VCR GAMES");
//bus
setcolor(15);
rectangle(0+i,250,150+i,350);
setfillstyle(4,9);
floodfill(1+i, 252, WHITE);
circle(35+i,360,10);
setfillstyle(5,10);
floodfill(37+i, 362, WHITE);
circle(120+i,360,10);
setfillstyle(5,10);
floodfill(122+i, 362, WHITE);
delay(20);
cleardevice();
}
getch();
closegraph();
}