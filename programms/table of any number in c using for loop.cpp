#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of x");
	scanf("%d",&n);
	for(i=1;i<=20;++i)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		
	}
	return 0;
}
