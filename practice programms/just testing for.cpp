#include<stdio.h>
int main()
{
	int no_rows;
	printf("enter the numbers you want");
	scanf("%d",&no_rows);
	
	for(int j=1;j<=no_rows;j++)
	{
		for (int i=1 ; i<=j ;i++)
		{
			printf("$");
		
		}

			printf("\n");
	}
}
