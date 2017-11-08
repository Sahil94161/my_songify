#include<iostream.h>
#include<conio.h>
class sum
{
int a,b,c;
public:
void sum1()
{
cout<<"enter two number:-";
cin>>a>>b;
c=a+b;
cout<<"\n sum is "<<c;
}
};
class sub
{
int a,b,c;
public:
void get()
{
cout<<"enter two number:-";
cin>>a>>b;
c=a-b;
cout<<"\n sum is "<<c;
}
};
class multi :public sum ,public sub
{
int a,b,c;
public:
void put()
{
cout<<"enter two number:-";
cin>>a>>b;
c=a*b;
cout<<"\n sum is "<<c;
}
};
void main()
{
multi  s1;
s1.sum1();
s1.get();
s1.put();
getch();
}