#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
int nol=0,not=0,nob=0,noc=0;
clrscr();
fp=fopen("key1.c","r");
while(1)
{
ch=fgetc(fp);
if(ch==EOF)
break;
noc++;
if(ch==' ')
nob++;
if(ch=='\n')
nol++;
if(ch=='\t')
not++;
}
fclose(fp);
printf("\n number of characters =%d",noc);
printf("\n number of blanks=%d",nob);
printf("\n number of lines=%d",nol);
printf("\n number of tabs=%d",not);
getch();
}