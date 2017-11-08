#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

main()
{
FILE *fp;
char na[20],ch;
char fa[20];
char da[20];
long int acc=123456789,ph,ba,addh,ac,found=0;

/*
do{
cout<<"\nEnter the Name:-";
gets(na);
cout<<"\nEnter the father Name:-";
gets(fa);
cout<<"\nEnter the date of birth:-";
cin>>da;
cout<<"\nEnter the addhar no.12 digit:-";
cin>>addh;
cout<<"\nEnter the phone No. 10 digit:-";
cin>>ph;
cout<<"\nEnter the Amount is limit (5000):-";
cin>>ba;
if(ba>5000)
{
cout<<"\nAcc no. is:- "<<acc;
}
else
printf("sorrry");
fp=fopen("record.txt","a");
fprintf(fp,"\n Name:-  %s \n father name:- %s\n Date Birth:- %s\n addhar no.:-  %ld\n phone no:- %ld\n Accountblance:- %ld\n Account no:- %ld \n",na,fa,da,addh,ph,ba,acc) ;
printf(" \n Record writen successfully!!!!");
fclose(fp);
cout<<"\ndo,you want to continue plz press key(y/n):-";

che=getche();
}
while(che=='y') ;      */

fp=fopen("record.txt","r");
if(fp==NULL)
{
printf("\n File opening Error");
}
cout<<"Enter the Account No.:-";
cin>>ac;
while(1)
{
ch=getc(fp);
if(ch==EOF)
break;
printf("%c",ch);
}

fclose(fp);

getch();
}



