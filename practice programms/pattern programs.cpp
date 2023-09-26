#include<stdio.h>
int main()
{
	int no_rows;
	printf("enter no of rows");
	scanf("%d",&no_rows);
	for(int i=1;i<=no_rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}
