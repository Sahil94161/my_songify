#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ofstream fout;
fout.open("country");
fout<<"usa\n";
fout<<"uk\n";
fout<<"south korea\n";

fout.close();
fout.open("capital");
fout<<"washington\n";
fout<<"london\n";
fout<<"seoul\n";
fout.close();

const int n=80;
char line[n];
ifstream fin;
fin.open("country");

cout<<"contents ofcountry file\n";
while(fin)
{
fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
fin.open("capital");
cout<<"\n contents of capital file \n";
while(fin)
{
fin.getline(line,n);
cout<<line<<endl;
}
fin.close();
getch();
}