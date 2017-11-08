#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
setcolor(GREEN);
settextstyle(10,HORIZ_DIR,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x,y-20,"WELCOME");
delay(1000);
cleardevice();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x,y-20,"7-segment LED Display Simulation");
outtextxy(x,y+20,"Press any key to start");
getch();
cleardevice();
delay(1000);
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..8888
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
rectangle(x-100,y+20,x-80,y+150);//bot L seg
floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);

delay(1000);
//graphdefaults();
cleardevice();

setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-120,y-200,x+120,y+200); //main..0000
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
//rectangle(x-70,y-10,x+70,y+10);//center
//floodfill(x,y,15);
rectangle(x-100,y+20,x-80,y+150);//bot L seg
floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
//graphdefaults();
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-120,y-200,x+120,y+200); //main..1111

rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);

rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);

delay(1000);
//graphdefault();
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-120,y-200,x+120,y+200); //main..2222
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
//rectangle(x-100,y-150,x-80,y-20);//top L seg
//floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
rectangle(x-100,y+20,x-80,y+150);//bot L seg
floodfill(x-90,y+80,15);
//rectangle(x+80,y+20,x+100,y+150);//bot R seg
//floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
graphdefaults();
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-120,y-200,x+120,y+200); //main..3333
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
//rectangle(x-100,y-150,x-80,y-20);//top L seg
//floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
//rectangle(x-100,y+20,x-80,y+150);//bot L seg
//floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-120,y-200,x+120,y+200); //main..4444
//rectangle(x-80,y-180,x+80,y-160);//top seg
//floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
//rectangle(x-100,y+20,x-80,y+150);//bot L seg
//floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
//rectangle(x-80,y+160,x+80,y+180);//bottom  seg
//floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..5555
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
//rectangle(x+80,y-150,x+100,y-20); //top R seg
//floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
//rectangle(x-100,y+20,x-80,y+150);//bot L seg
//floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..6666
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
//rectangle(x+80,y-150,x+100,y-20); //top R seg
//floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
rectangle(x-100,y+20,x-80,y+150);//bot L seg
floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..7777
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
//rectangle(x-100,y-150,x-80,y-20);//top L seg
//floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
//rectangle(x-70,y-10,x+70,y+10);//center
//floodfill(x,y,15);
//rectangle(x-100,y+20,x-80,y+150);//bot L seg
//floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
//rectangle(x-80,y+160,x+80,y+180);//bottom  seg
//floodfill(x,y+170,15);
delay(1000) ;
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..8888
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
rectangle(x-100,y+20,x-80,y+150);//bot L seg
floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(15);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
setfillstyle(SOLID_FILL,4);
rectangle(x-130,y-210,x+130,y+210); //main..9999
rectangle(x-80,y-180,x+80,y-160);//top seg
floodfill(x,y-170,15);
rectangle(x-100,y-150,x-80,y-20);//top L seg
floodfill(x-90,y-80,15);
rectangle(x+80,y-150,x+100,y-20); //top R seg
floodfill(x+90,y-80,15);
rectangle(x-70,y-10,x+70,y+10);//center
floodfill(x,y,15);
//rectangle(x-100,y+20,x-80,y+150);//bot L seg
//floodfill(x-90,y+80,15);
rectangle(x+80,y+20,x+100,y+150);//bot R seg
floodfill(x+90,y+80,15);
rectangle(x-80,y+160,x+80,y+180);//bottom  seg
floodfill(x,y+170,15);
delay(1000);
cleardevice();
setcolor(GREEN);
settextstyle(10,HORIZ_DIR,4);
settextjustify(CENTER_TEXT,CENTER_TEXT);
outtextxy(x,y-20,"THANKYOU");
getch();

closegraph();

}