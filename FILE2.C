#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char str[20];
clrscr();
fp=fopen("raman.txt","w");
fputs("my name is sahil goyal",fp);
fclose(fp);
getch();
}