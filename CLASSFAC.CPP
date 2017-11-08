#include<iostream.h>
#include<conio.h>
class std
{
private :
int f,n,i;
public:
void get()
{
cout<<endl<<"enter the no. of tableL:-";
cin>>n;
f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}
}
void put()
{
cout<<"\nsum:-"<<f;
}
};
void main()
{
std s;
clrscr();
s.get();
s.put();
getch();
}
