#include<stdio.h>

int main()
{
	int n,x;
	printf("enter a number of which you want to table");
	scanf("%d",&x);
	printf("the table of %d is :",x);

	printf("\n");
	for(n=1;n<=10;n++)
	{
		
		printf( "%d * %d = %d",x,n,x*n);
		printf("\n");
	}
	return 0;
}

