#include<stdio.h>
int main()
{
	int r;
	printf("enter  no of rows ");
	scanf("%d",&r);
	for(int i=r;i>=1;--i)
	{
		for(int s=0;s<r-i;++s)
		printf("  ");
		for(int j=i;j<=2*i-1;++i)
		printf("*");
		for(int j=0;j<i-1;++j)
		printf("*");
		printf("\n");
				
	}
	return 0;
}
