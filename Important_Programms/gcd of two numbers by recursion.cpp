#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int a,b,gcd;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	gcd=hcf(a,b);
	printf("gcd of number is %d",gcd);
	return 0;
}
int gcd(int n1,int n2)
{
	if(n2==0)
	return n1;
	else
	return gcd(n2,n1%n2);
}

