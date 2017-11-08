#include<iostream.h>
#include<conio.h>
class shape
{
virtual void draw()=0;
};
class rectangle:shape
{
public:
void draw()
{
cout<<"drawing rectangle.\n ";
}
};
class circle :shape
{
public:
void draw()
{
cout<<"drawing circle...\n";
}
};
void main()
{
rectangle rec ;
circle cir;
clrscr();
rec.draw();
cir.draw();
getch();
}
