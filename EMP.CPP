#include<iostream.h>
#include<conio.h>
class std
{
private:
int m1;
int m2;
int m3;
int m4,sum,per;
public:
void get()
{
cout<<endl<<"enter the marks english:-";
cin>>m1;
cout<<"enter the marks hindi:-";
cin>>m2;
cout<<"enter the marks math:-";
cin>>m3;
cout<<"enter the marks physics:-";
cin>>m4;
sum=m1+m2+m3+m4;
per=sum/4;
}
void put()
{
cout<<endl<<"marks of english:-"<<m1;
cout<<endl<<"marks of hindi:-"<<m2;
cout<<endl<<"marks of math:-"<<m3;
cout<<endl<<"marks of physics:-"<<m4;
cout<<endl<<"total marks:-"<<sum;
cout<<endl<<"perctange:-"<<per<<"%";
}
};
void main()
{
int i,n;
std s[2];
clrscr();
for(i=0;i<2;i++)
{
s[i].get();
cout<<endl<<"enter the to record the student:-";
cin>>n;
switch(n)
{
case 1:
s[0].put();
break;
case 2:
s[1].put();
break;
default:
break;
}
}
getch();
}