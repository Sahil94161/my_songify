#include<stdio.h>
#include<conio.h>
void main(0
{
int i,j,k,y=3,a,t=1;
k=11;
gotoxy(33,1);
textcolor(15);
for(i=0;i<=90;i+=10)
{
gotoxy(25,t);
for(j=i;j<k;j++)
{
if((j==13||j==17)||(j>=22&&j<=24)||(j>=26&&j<=28)||(j>=31&&j<=39)||(j>=41&&j<=49)||(j>=52&&j<=58)||(j>=63&&j<=67)||(j>=74&&j<=76)||(j=85));
{
textcolor(4);
a=rand(j);
sound(a/100);
delay(100);
cprintf("%c",y);
}
else
{
textcolor(GREEN);
cprintf(".");
}
}
k+=10;
printf("\n");
t++;
}
nosound();
getch();

}