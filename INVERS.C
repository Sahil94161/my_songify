#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,k,det=0,b[3][3],c[3][3];
c[3][3]=0;
b[3][3]=0;
clrscr();
printf("Enter th elements row wise:-\n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
scanf("\t%d",&a[i][j]);
}
}
clrscr();
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("\t%d",a[i][j]);
}
}
//determint of a matric
det=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
printf("\n|A|=%d",det);
// minnor of coffactor
b[0][0]= (a[1][1]*a[2][2]-a[2][1]*a[1][2]) ;
b[0][1]= -1* (a[1][0]*a[2][2]-a[2][0]*a[1][2]);
b[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
b[1][0]= -1*(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
b[1][1]= (a[0][0]*a[2][2]-a[2][0]*a[0][2]);
b[1][2]= -1*(a[0][0]*a[2][1]-a[2][0]*a[0][1]);
b[2][0]= (a[0][1]*a[1][2]-a[1][1]*a[0][2]);
b[2][1]= -1*(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
b[2][2]= (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
if(det==0)
{
printf("\n********INVERSE DOSE NOT EXIT********* ");
}
else
{
//adjoint of matric
printf("\n\n adjA:-");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("\t%d",b[j][i]);
}
}
//inverse of matric
printf("\nA inverse:-");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
c[i][j]=b[j][i]/det;
printf("\t%d",c[i][j]);
}
}
}
getch();
}