#include<iostream.h>
#include<conio.h>
class std
{
private:
int a;
int b;
int i;
public:
void get()
{
a=0;
b=1;
}
void put()
{
cout<<"a="<<a"\nb="<<b;
int i;
for(i=0;i<=23;i++)
{
i=a+b;
cout<<"\ni="<<i;
a=b;
b=i;
}
};
void main()
{
clrscr();
std s;
s.get();
s.put();
getch();
}

}