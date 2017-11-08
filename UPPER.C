#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20],c[40];
int i=0,j=0;
clrscr();
printf("Enter the string a:-\n");
gets(a);
printf("Enter the string b:-\n");
gets(b);
while(a[i]!='\0')
{
c[j]=a[i];
i++;
j++;
}
i=0;
while(b[i]!='\0')
{
c[j]=b[i];
i++;
j++;
}
c[j]='\0';
printf("\n The string converted into upper case is :");
puts(c);
getch();
}