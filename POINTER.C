#include<stdio.h>
#include<conio.h>
void main()
{
int i=3,*j,**k;
j=&i;
k=&j;
clrscr();
printf("value of i is = %d \n ",i);
printf("address of i is = %u \n ",&i);
printf("value at address is = %d \n ",*(&i));
printf("value of j is = %u \n ",&i);
printf("address of j is = %u \n ",&j);
printf("value at address is = %d \n ",**(&j));
printf("value of k is = %u \n ",&j);
printf("address of k is = %u \n ",&k);
printf("value at address is = %d \n ",***(&k));

getch();
}