#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int x=0,y=0,i=5;
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
while(!kbhit()!=0)
{
if(x>=340)
{
x=-x;
}
if(y>=380)
{
y=-y;
}
setcolor(rand());
settextstyle(10,0,4);
outtextxy(abs(x),abs(y),"HAPPY RAKSHABANDHAN");
x=x+5;
y=y+5;
sound(100*i);
i+=2;
if(i>100)i=1;
delay(50);
nosound();
cleardevice();
}
getch();
}