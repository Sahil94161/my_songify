#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<" enter the value of a:-";
cin>>a;
cout<< endl<<" enter the value of b:-";
cin>>b;
c=a+b;
b=c-b;
a=c-a;
cout<<endl<<"value a =" <<a;
cout<<endl<<"value b =" <<b;
getch();
}
