#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(void)
{
int i;
char cm=177,ce=178;
textcolor(GREEN);
clrscr();
gotoxy(20,9);
printf("loading...!!");
gotoxy(20,10);
for(i=0;i<=26;i++)
{
printf("%c",cm);
}
gotoxy(20,10);
for(i=0;i<=26;i++)
{
delay(1000);
printf("%c",ce);
}
getch();
}