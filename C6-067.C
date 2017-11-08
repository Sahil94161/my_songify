#include<stdio.h>
#include<conio.h>
//#include<graphics.h>
#include<string.h>
void main()
{
int bl,type,pin,tran=1;
long int acc1;
 char nam;
 char na1[20],fa[24],ge[10];
 long int ph[10],i,add[10],am[20],n[20],acc[20],acc3=123456789,acc2,flag=0;
 float ba,dep,drw,trf;
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"C:\\turboC3\\bgi");
 //setbkcolor(1);
 //cleardevice();
textbackground(1);
clrscr();
 //account create


 printf("\t \t \t \tinformation of new accout person");
 for(i=0;i<=1;i++)
 {
printf("\nEnter your name:-");
scanf("%s",&na1[i]);
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
acc[i]=acc3+i;
printf("\nAccount no. is provide:- %ld",acc[i]);
}
}
//cleardevice();
clrscr();
 printf("\n\t\t\t\t BANKING SYSTEM\n\n");
 printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
 printf("\t\t\4\t\t\t\t\t\t\4\n");
 printf("\t\t\4\t\t\t\t\t\t\4\n");
 printf("\t\t\4\t      WELCOME TO THE BANK\t\t\4\n");
 printf("\t\t\4\t\t\t\t\t\t\4\n");
 printf("\t\t\4\t\t\t\t\t\t\4\n");
 printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
 printf(" Please enter your account no.:-");
 scanf("%ld",&acc2);
 for(i=0;i<=1;i++)
 {
 if(acc2==acc[i])
 {
 while(tran==1)
 {
 int option;
 ba=n[i];
 nam=na1[i];
 printf("\n choose what you want to do\n ");
  printf("1 - Balance Enquiry\n");
  printf("2 - Deposit\n");
  printf("3 - Withdrawl\n");
  printf("4 - transfer\n");
  scanf("%d",&option);
  switch(option)
  {
  case 1:
  printf("\t\t\t*BALANCE ENQUIRY*\n\n");
  printf("your current balance is :-  %f \n",ba);
  break;
  case 2:
  {
  printf("\n\t\t\t*DEPOSIT AMOUNT*\n\n");
  printf("how much money you want to deposit:");
   scanf("%f",&dep);
   if(dep>0 && dep<=20000)
   {
   printf("\n your % 2f rs deposited in your account \n\n",dep);
   ba=dep+ba;

   }
   else if (dep>20000)
   printf("\n you can't deposit that much amount in one time:\n\n");
   else
   {
   printf("invalid deposit amount\n");
   }
     }
     break;
     case 3:
     {
     printf("\n\t\t*WITHDRAWL AMOUNT*\n\n");
     printf("how much money do you want to withdraw");
     scanf("%f",&drw);
     if(drw<=ba && drw<=20000)
     {
     printf("\n you just withdraw %2fRs\n\n",drw);
     ba=ba-drw;

     }
     else if(drw>20000)
     {
     printf("\n you can't withdraw that much amount is one time.\n\n ");
     }
     else
     printf("\n you donot have enough money\n\n ");
     }
     break;
     case 4:
     {
     printf("\n\t\t\tAccount you want to transfer:");
     scanf("%ld",&acc1);
     printf("\n how much amount?");
     scanf("%f",&trf);
     if(ba>=trf)
     {
     printf("\n your %2fRs successfully transferred\n\n",trf);
     ba-=trf;
     }
     else
     printf("\n you do not have sufficient balance\n\n");

     }
     break;
     default:
     printf("invalid transaction ");
  }
  tran=0;
  while(tran!=1 &&tran!=2)
  {
   printf("do you want to do another transaction?\n ");
   printf("1. yes 2. no.\n ");
    scanf("%d",&tran);
   if(tran!=1 &&tran!=2)
   {
   printf("invalid no.\n choose between 1 and 2 only \n ");}}}
   clrscr();
  // cleardevice();
 printf("\t\t\t--------------------------------------");
 printf("\n\t\t\t\t BANK.. TRUST IS THE POLICY \n");
 printf("\t\t\t--------------------------------------\n\n");
 printf("\n\n\t\t\t your name: %s \n\n",nam);
 printf("\t\t\t your account no: %ld\n\n",acc2);
 if(dep>=0&& dep < 20000)
 {
 printf("\t\t\t\4 your current balance is %2fRs\n ",ba);
 }
 else
 {
 printf("\t\t\t\4 deposit ORs\n");
 }
 printf("\n\t\t\t\t   Thankyou!      \n");
 flag=1;
 }
 }
 if(flag==0)
 printf("soory your account dose not exit in your bank");
 getch();

}
