#include<iostream.h>
#include<graphics.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#define KeyEsc 27

int main()
{
   int ch, gd=DETECT;
   int gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");

   time_t rawtime;
   struct tm *currentTime;
   char a[100];

   while(1)
   {
    cleardevice();
   rawtime=time(NULL);
   currentTime=localtime(&rawtime);
   strftime(a,100,"%I:%M:%S",currentTime);

   setcolor(11);
   settextstyle(3,HORIZ_DIR,4);
   outtextxy(200,200,a);

   strftime(a,100,"%a %d %b %y",currentTime);
   settextstyle(3,HORIZ_DIR,4);
   outtextxy(200,260,a);
   delay(1000);

   ch=getch();
   switch(ch)
   {
   case KeyEsc:exit(1);
   break;
   default:
   break;
   }
   }
   getch();
   }

