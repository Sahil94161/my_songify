#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream outf("goyal");
char na[20];
cout<<"enter item name:- ";
cin>>na;
outf<<"na"<<endl;
float n;
cout<<"enter item cost:-";
cin>>n;
outf.close();
ifstream inf("goyal");
inf>>na;
inf>>n;
cout<<endl;
cout<<"item name :-"<<na<<endl;
cout<<"item cost :-"<<n<<endl;
inf.close();
getch();
}