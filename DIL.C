#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C://TURBOC3//bgi ");
setcolor(4);
circle(250,50,40);
circle(315,50,40);
line(220,77,280,150);
line(345,77,280,150);
setfillstyle(1,4);
floodfill(250,52,4);
setfillstyle(1,4);
floodfill(315,52,4);
setfillstyle(1,4);
floodfill(354,48,4);
setfillstyle(1,4);
floodfill(7,277,4) ;
getch();
closegraph();
}
