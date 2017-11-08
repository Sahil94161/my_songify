#include<iostream.h>
#include<conio.h>
class sample
{
private:
int x,y;
public:
void getdata()
{
cout<<"\nenter two no:-";
cin>>x>>y;
}
sample operator  -(sample ee)
{
ee.x=x-ee.x;
ee.y=y-ee.y;
return (ee);
}
void dispaly()
{
cout<<"\n sub of 2 no is"<<x<<endl<<y;
}
};
void main()
{
sample ex1,ex2,ex3;
clrscr();
ex1.getdata();
ex2.getdata();
ex3=ex1-ex2;
ex3.dispaly();
getch();
}
