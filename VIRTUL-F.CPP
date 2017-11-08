#include<iostream.h>
#include<conio.h>
class A
{
public:
virtual void display()
{
cout<<"base class is invoked \n";
}
};
class B:public A
{
public:
void display()
{
cout<<"drive class in invoked\n";
}
};
void main()
{
A *a;
B b;
clrscr();
a=&b;
a->display();
getch();
}