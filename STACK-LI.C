#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct stack
{
int data;
struct stack *link;
};
struct stack *top=NULL;
int n;
int ch;
void push();
void pop();
void display();
void main()
{
while(1)
{
printf("\n \t\t\t MENU");
printf("\n \t\t--------");
printf("\n 1.push");
printf("\n 2.pop");
printf("\n 3.Display");
printf("\n 4. Exit");
printf("\n \t Enter your choice(1-4):-");
fflush(stdin);
scanf("%d",&ch)
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(1);
break;
default: printf("INVALID input");
}
}
getch();
}
void push()
{
struct stack *temp;
temp=(struct stack * ) malloc(sizeof(struct stack));
printf("Enter any no:-");
scanf("%d",&n);
temp->data=n;
temp->link=top;
top=temp;

}
void pop()
{
struct stack *start;
start=top;
if(top==NULL)
{
printf("stack is empty");
return;
}
else
{
n=start->data;
printf("No poped=%d\n",n);
top=top->link;
free(start);

}
}
void display()
{
struct stack *p;
p=top;
printf("stack list :\n");
while(p!=NULL)
{
n=p->data;
printf("%d\n",n);
p=p->link;

}
}