#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<dos.h>
#define keyup     72
#define keydown   80
#define keyleft   75
#define keyright  77
#define keyEsc    27

void main()
{
int x=31,y=13.5,i,ch;
char cm=177,ce=178;
textcolor(GREEN);
clrscr();
gotoxy(20,9);
printf("loading...!!");
gotoxy(20,10);
for(i=0;i<=26;i++)
{
cout<<cm;
}
gotoxy(20,10);
for(i=0;i<=26;i++)
{
delay(1000) ;
cout<<ce;
}

textmode(C80);//scale i<=x<=80, 1<=y<=25
while(1)
{
textbackground(10);
clrscr();
_setcursortype(0);
gotoxy(x,y);
textcolor(7);
cprintf("HELLO FE!");
gotoxy(80,25);
textcolor(14+BLINK);
cprintf("Press Ese to exit....!");
ch=getch();
switch(ch)
{
case keyup: y--; if(y<1)y=25;
break;
case keydown: y++;if(y>25)y=1;
break;
case keyleft: x--;if(x<1)x=80-9;
break;
case keyright: x++;if(x>80-9)x=1;
break;
case keyEsc:exit(1);
break;
default:
	break;
}
}
}