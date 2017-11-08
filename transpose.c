#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("enter the elements for first matrix:-");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		scanf("%d",&a[i][j]);
     	} 
	}
		printf("transpose of matrix a :-");
	for(i=0;i<=2;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
		c[i][j]=b[j][i];
		printf("\t%d",c[j][i]);
     	} 
	}
	return 0;
getch();

}
