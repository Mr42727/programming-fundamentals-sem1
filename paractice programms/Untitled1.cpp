#include<stdio.h>
int main()
{
	int a[5][5],b[5][5],r1,c1,r2,c2;
	printf("enter the no of coloumn and rows of m1\n");
	scanf("%d%d",&r1,c1);
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrics m1 is = \n");
		for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}


