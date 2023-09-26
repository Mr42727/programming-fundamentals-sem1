#include<stdio.h>
int main()
{
	int a[20],n,m,r,i;
	printf("enter a decimal number");
	scanf("%d",&n);
	//m=n;
	for(i=0;n>0;i++)
	{
		
	r=n%2;
	a[i]=r;
	n=n/2;
	}
	printf("binary equivalent is ");
	for(--i;i>=0;i--)
	printf(" %d",a[i]);
	return 0;
}
