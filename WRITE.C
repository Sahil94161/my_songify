#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char ch;
clrscr();
fp=fopen("raman.c","r");
while((ch=getc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
getch();
}