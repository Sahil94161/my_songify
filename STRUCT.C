#include<stdio.h>
#include<conio.h>
void main()
{
struct sir
{
int  salary;
char name[80];
char de[50];
};
struct sir a[50];
long int n,i,ta,hra, net,da;
clrscr();
printf("\n enter the number of deparment:-");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("\n enter the deparment:-");
scanf("%s",&a[i].de);
printf("\n enter the name:-");
scanf("%s",&a[i].name);
printf("\n enter the salary:-");
scanf("%d",&a[i].salary);
ta=a[i].salary*4/100;
da=a[i].salary*5/100;
hra=a[i].salary*6/100;
net=a[i].salary+ta+da+hra;
}
for(i=0;i<=n;i++)
{
printf("\n******DETAILS OF DEPARMENT %d********",i+1);
printf("\n deparment =%s",a[i].de);
printf("\n name = %s",a[i].name);
printf("\n salary %d",a[i].salary);
printf("ta=%ld\n",ta);
printf("da=%ld\n",da);
printf("hra=%ld\n",hra);
printf("net=%ld\n",net);
}
getch();
}