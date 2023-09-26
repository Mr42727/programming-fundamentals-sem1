#include<stdio.h>
int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return(n*fact(n-1));
}
int main()
{

	int fact,n;
	printf("enter a number");
	scanf("%d",&n);
	int factorial=fact(n);
	printf("factorial of %d is %d",x,factorial);
	return 0;
	
}

