#include<stdio.h>
int main()
{
/*	printf("*");
	printf("\n");
	printf("**");
	printf("\n");
	printf("***");
	printf("\n");
	printf("****");
	printf("\n");
	printf("*****");
	return 0;*/     //by second and by nesting 
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<i;j++)
		printf("*");
			printf("\n");
	}

	return 0;
}
