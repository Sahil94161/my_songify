#include<iostream.h>
#include<conio.h>
template <class t>
t max (t a,t b)
{
return (a>b)?a:b;
}
void main()
{
int a=20,b=6;
float x=78.2,y=56.2;
char p='a',q='k';
clrscr();
cout<<"maximum integer no is"<<max(a,b)<<endl;
cout<<"maximum float no is"<<max(x,y)<<endl;
cout<<"maximum char no is"<<max(p,q)<<endl;
getch();
}