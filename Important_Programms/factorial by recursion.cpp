#include<stdio.h>
int fact(int x);
int main()
{
	int n,factorial;
	printf("enter a number for factorial");
	scanf("%d",&n);
	factorial=fact(n);
	printf("factorial of %d is %d",n,factorial);
	
	
}
int fact(int x)
{
	if(x==1 || x==0)
	return 1;
	else
	return (x * fact(x-1));
	
}
