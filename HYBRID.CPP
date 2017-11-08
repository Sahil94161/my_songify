#include<iostream.h>
#include<conio.h>
class drive
{
public:
char na[20],br[20];
int roll;
public:
void get()
{
cout<<"enter the branch:-";
cin>>br;
cout<<"\nenter the name of student:-";
cin>>na;
cout<<"\nenter the roll no:-";
cin>>roll;
}
};
class drive1 :public drive
{
public:
int m1,m2,m3,m4,m5,net,per;
public:
void get1()
{
cout<<"\n*****enter the marks of student*****";
cout<<"\n enter the marks of english:-";
cin>>m1;
cout<<"\n enter the marks of hindi:-";
cin>>m2;
cout<<"\n enter the marks of math:-";
cin>>m3;
cout<<"\n enter the marks of physics:-";
cin>>m4;
cout<<"\n enter the marks of chemistry:-";
cin>>m5;
net=m1+m2+m3+m4+m5;
per=net/5;
}
};
class drive2
{
public:
char c[20];
public:
void get2()
{
cout<<"\nwho r faviorte of playing of match:-" ;
cin>>c;
}
};
class result: public drive1,public drive2
{
public:
void put()
{
cout<<"\nbranch:-"<<br;
cout<<"\nname:-"<<na;
cout<<"\nroll no:-"<<roll;
}
void put1()
{
cout<<"\n****** marks of student******";
cout<<"\n marks of english:-"<<m1;
cout<<"\n marks of hindi:-"<<m2;
cout<<"\n marks of math:-"<<m3;
cout<<"\n marks of physics:-"<<m4;
cout<<"\n marks of chemistry:-"<<m5;
cout<<"\ntotal="<<net;
cout<<"\nperctange:-"<<per<<"%";
}
void put2()
{
cout<<"\nmatch:-"<<c;
}
};
void main()
{
result s1;
clrscr();
s1.get();
s1.get1();
s1.get2();
clrscr();
s1.put();
s1.put1();
s1.put2();
getch();

}