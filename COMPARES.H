#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[30];
int i=0,len1=0,len2=0,same=0;
clrscr();
printf("Enter the string a :-");
gets(a);
printf("Enter the string b :-");
gets(b);
len1=strlen(a);
len2=strlen(b);
if(len1==len2)
{
 while(i<len1)
 {
 if(a[i]==b[i])
 i++;
 else break;
 }
}
if(len1!=len2)
printf("\n the two string are equal ");
if(same==0)
{
if(a[i]>b[i])
printf("\n string1 is greater than string2 ");
else if(a[i]<b[i])
printf("\n string2 is greater than string1 ") ;
}
getch();
}