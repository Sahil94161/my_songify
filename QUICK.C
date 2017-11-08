#include<stdio.h>
#include<conio.h>
void quick(int a[],int n, int be,int en, int *loc)
{
	int le,re,temp;
	le=be;
	re=en;
	*loc=be;
	step2:
	while(a[*loc]<=a[re]&&*loc!=re)
		re--;
		if(*loc==re)
		return ;
		if(a[*loc]>a[re])
		{
			temp=a[*loc];
			a[*loc]=a[re];
			a[re]=temp;
			*loc=re;
		}
		goto step3;
		step3:
			while(a[le]<=a[*loc]&&le!=*loc)
			le++;
			if(*loc==le)
			return;
			if(a[le]>a[*loc])
			{
				temp=a[le];
				a[le]=a[*loc];
				a[*loc]=temp;
				*loc=le;
			}
			goto step2;
}

void quick_sort(int a[],int n)
{
	int be,en,top=-1,loc;
	int lo[10],up[10];
	if(n>1)
	{
		top++;
		lo[top]=0;
		up[top]=n-1;

	}
	while(top!=-1)
	{
		be=lo[top];
		en=up[top];
		top--;

	quick(a,n,be,en,&loc);
	if(be<loc-1)
	{
		top++;
		lo[top]=be;
		up[top]=loc-1;

	}
	if(loc+1<en)
	{
		top++;
		lo[top]=loc+1;
		up[top]=en;


	}
}
}


int main()
{
	int a[30],n,i;
	
	printf("enter the element:-");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&a[i]);
}
quick_sort(a,n);
	for(i=0;i<n;i++)
	{
	
	printf("\t%d",a[i]);
}
return 0;
getch();
}
