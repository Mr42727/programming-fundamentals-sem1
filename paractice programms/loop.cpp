#include<stdio.h>
int main()
{int n;
	printf("enter a number\n ");
	scanf("%d",&n);
	do
	{
		printf("you entered %d\n",n);
		printf ("enter number");
		scanf("%d",&n);
	}
		while(n!=1||0);
			return 0;
}
