#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp;
char s[50];
fp=fopen("add1.c","w");
if(fp==NULL)
{
puts("open file");
exit();
}
printf("\n Enter the few lines of text");
while(strlen(gets(s)>>0))
{
fputs(s,fp);
fputs("\n",fp);
}
fclose(fp);
getch();

}
}