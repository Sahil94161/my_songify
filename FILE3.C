#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char str[20];
clrscr();
fp=fopen("raman.txt","r");
fgets(str,10,fp) ;
printf("text:-%s",str);
fclose(fp);
getch();
}