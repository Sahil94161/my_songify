#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
int value;
char str[20];
clrscr();
printf("enter the value and string");
scanf("%d%s",&value,str);
gets(str);
fp=fopen("qwerty.txt","w");
fprintf(fp,"%d %s",value,str);
fclose(fp);
getch();

}


