#include<stdio.h>
int main()
{
	int n,m,p,q;
	printf("enter the order of your 1st matrices");
	scanf("%d%d",&n,&m);

	int a[n][m];
	int b[p][q];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
     	scanf("%d",&a[i][j]);
			
		}
			printf("\n");
	}
		printf("enter the order of your 2nd matrices");
		scanf("%d%d",&p,&q);
	
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
     	scanf("%d",&a[p][q]);
			
		}
			printf("\n");
	}
	
		printf(" your 1st matrices=");
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
     	printf("%d",a[i][j]);
			
		}
			printf("\n");
	}
		printf(" your 2nd matrices=");
		for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
     	printf("%d",b[i][j]);
			
		}
			printf("\n");
	}
}
