#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\n enter the key = ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("the enter character is in upper case.In lower case it is: %c",(ch+32));
else
printf("the enter charchter is in lower case.In upper case it is : %c",(ch-32));
getch();



}