#include<stdio.h>
#include<conio.h>
void main()
{
int i=0,len1=0,len2=0,same=0;
char a[20],b[20];
clrscr();
printf("Enter the string 1:-");
gets(a);
printf("Enter the string 2:-");
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
if(i==len1)
{
same=1;
printf("\n the two string are equal");
}
}
if(len1!=len2)
{
printf("\n the string are not equal");
}
if(same==0)
{
if(a[i]>b[i])
printf("\n string1 is greater than string2");
else if(a[i]<b[i])
printf("\n string2 is greater than string1");
}
getch();

}

