#include<stdio.h>
int main()
{
	int a[30],n,i;
	printf("entrer a decimal number");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		int r=n%2;
		a[i]=r;
		n=n/2;
	}
	for(i--;i>=0;i--)
	printf("%d",a[i]);
}
