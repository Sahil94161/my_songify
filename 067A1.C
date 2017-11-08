
#include<graphics.h>
#include<time.h>
#include<conio.h>
#include<string.h>

int main()
{
   int gd=DETECT;
   int gm;
   time_t rawtime;
   struct tm *currentTime;
   char a[100];
   initgraph(&gd,&gm,"c:\\TURBOC3\\bgi");

 /*  time_t rawtime;
   struct tm *currentTime;
   char a[100];*/
   rawtime=time(NULL);
   currentTime=localtime(&rawtime);
   strftime(a,100,"%I:%M:%S",currentTime);

   setcolor(11);
   settextstyle(3,HORIZ_DIR,10);
   outtextxy(200,100,a);

  /* strftime(a,100,"%a %d %b %y",currentTime);
   settextstyle(3,HORIZ_DIR,4);
   outtextxy(200,260,a);*/







   getch();
   }

