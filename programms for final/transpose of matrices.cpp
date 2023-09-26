#include<stdio.h>
int main()
{
	int a[3][3],b[3][3];
	printf("enter the element of matrices");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
		
	}
	printf("matrices a is equal to :\n");
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
    }
    printf("transpose is equal to : \n");
    for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",b[i][j]=a[j][i]);
			
		}
		printf("\n");
    
	
	
	}
}
