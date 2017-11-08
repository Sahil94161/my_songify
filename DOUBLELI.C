#include<stdio.h>
#include<conio.h>
void insertbe();
void insertend();
void insertaf();
void deletebeg();
void delend();
void desp();
void dis();
struct node
{
int data;
struct node *pre ,*next;

};
struct node *head=NULL;
int ch1,ch2,value ,n,loc;
void main()
{
clrscr();
while(1)
{
printf("\n Main MENU_\n");
printf("n1. Insert\n 2.deletd \3.Display \n 4.Exit \n Enter your choice:-");
fflush(stdin);
scanf("%d",&ch1);
switch(ch1)
{
case 1:
while(1)
{
printf("\n\t\t\t **Insert Sub Menu** ");
printf("\n \t\t1. At beginning\n\t\t2. At End \n\t\t3. After a node \n \t\t 4.Return to main Menu \n\t Enter your choice:-");
fflush(stdin);
scanf("%d",&ch2);
switch(ch2)
{
case 1: insertbe();
break;
case 2: insertend();
break;
case 3: printf("\n Enter the location  after which you want to insert:-");
fflush(stdin);
scanf("%d",&loc);
insertaf(loc);
break;
case 4: goto EndSwitch;
default: printf("\n Please select correct inserting option!!!\n");
}
}
case 2: while(1)
{
printf("\n **Delete SubMenu**\n");
printf("\n1. At Beginning \n2. At End ")
}
}
}
}