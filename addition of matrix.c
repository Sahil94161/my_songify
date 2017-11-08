#include<stdio.h>
#include<stdio.h>
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

	printf("enter the elements for second matrix:-");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		scanf("%d",&b[i][j]);
     	} 
	}
		printf("sum of matrix a+b:-");
	for(i=0;i<=2;i++)
	{
		printf("\n");
		for(j=0;j<=2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		printf("\t%d",c[i][j]);
     	} 
	}
getch();

}
