#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char na[20],fa[24],ge[10];
 long int ph[10],i,add[10],am[20],n[20],acc[20],acc1=123456789,acc2,flag=0;
 clrscr();
printf("\t \t \t \tinformation of new accout person");
for(i=0;i<=1;i++)
{
printf("\nEnter your name:-");
scanf("%s",&na[i]);
printf("\nEnter your father name:-");
scanf("%s",&fa[i]);
printf("\nEnter your phone no.:-");
scanf("%ld",&ph[i]);
printf("\nEnter the Gender of coustomer:-");
scanf("%s",&ge[i]);
printf("\nEnter your addhar no.:-");
scanf("%ld",add[i]);

printf("Enter your Amount only 5000 :-");
scanf("%ld",&am[i]);
if(am[i]>=5000)
{
n[i]=am[i];
printf("\nAmount can deposit in your account");
acc[i]=acc1+i;
printf("\nAccount no. is provide:- %ld",acc[i]);
}
}

printf("\nEnter your account no:-");
scanf("%ld",&acc2);
for(i=0;i<=2;i++)
{
if(acc[i]==acc2)
{
printf("your current ammount:- %ld",n[i]);
flag=1;
break;
}
}
if(flag==0)
{
printf("Invalid account");
}
else
getch();
}