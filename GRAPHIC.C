#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
setcolor(WHITE)  ;
rectangle(150,180,250,300);
rectangle(250,180,450,300);
rectangle(180,250,220,300);
rectangle(290,200,400,270);
circle(197,153,25);
line(200,100,150,180);
line(200,100,250,180);
line(200,100,420,100);
line(420,100,450,180);
line(350,430,250,300) ;
line(250,430,150,300);
line(290,235,399,235);
line(343,200,343,270);
setfillstyle(SOLID_FILL,BROWN);
floodfill(152, 182, WHITE);
floodfill(252, 182, WHITE );
setfillstyle(SLASH_FILL, BLUE);
floodfill(182, 252, WHITE );
floodfill(345,345,WHITE);
setfillstyle(HATCH_FILL,GREEN);
floodfill(200,105,WHITE);
setfillstyle(4,6);
floodfill(205,105,WHITE);
setfillstyle(4,4);
floodfill(200,155,WHITE);
floodfill(347,202,WHITE);
setfillstyle(4,8);
floodfill(345,272,WHITE);
setfillstyle(4,10);
floodfill(294,233,WHITE);
setfillstyle(4,11);
floodfill(292,237,WHITE);
getch();
closegraph();

}
