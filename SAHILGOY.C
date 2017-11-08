#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,sum1=0,sum2=0,total,ascii,perc,len;
char boy[20],girl[20];
clrscr();
textcolor(GREEN);
cprintf("Enter the name Boy\n");
gets(boy);
textcolor(BLUE);
cprintf("Enter the name of Girl\n");
gets(girl);
len=strlen(boy);
for(i=0;i<len;i++)
{
ascii= boy[i];
sum1=sum1+ascii;
}
len=strlen(girl);

for(i=0;i<=len;i++)
{
ascii=girl[i];
sum2=ascii+sum2;
}
total=sum1+sum2;
perc=total%100;
textcolor(RED);
cprintf("love calcultar perctange =%d",perc);

getch();

}