#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int m,x,y,d=0,i ;
initgraph(&gd,&gm,"C:\\turboC3\\bgi");
x=getmaxx()/2;
y=getmaxx()/2;
for(i=30;i<200;i++)
{
delay(100);
setcolor(i/10);
arc(x,y,0,180,i-10);
}
closegraph();
getch();
}