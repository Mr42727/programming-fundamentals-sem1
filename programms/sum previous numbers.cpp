#include<stdio.h>
int main()
{
	int x,sum=0;
	printf("enter a number ");
	scanf("%d",&x);
	for(int i=1;i<=x;++i)
	{
		sum=sum+i;
	}
	printf("sum is equal to %d",sum);
	return 0;
}
