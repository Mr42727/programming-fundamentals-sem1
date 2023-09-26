#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("enter the order of your first matrice\n");
	scanf("%d%d",&r1,&c1);
	printf("enter your order of your second matrices\n");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2],c[10][10];
	if(c1!=r2)
	printf("not possible");
	else 
	printf("multiplication is possible\n ");
	printf("enter the element of 1st matrices");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("first matrices is equal to :\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
		printf("enter the element of 2nd matrices");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("second matrices is equal to :\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			c[i][j]=0;
			for (int k=0;k<r1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("multiplication is equal to \n");
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
