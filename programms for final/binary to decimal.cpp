#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,decimal=0;
	printf("how many numbers");
	scanf("%d",&n);
	int binary[n];
	printf("enter the binary numbers\n");
	for(i=0;i<=n;i++)
	{ 
	scanf("%d",&binary);
	}
	for(i=0;i<=n;i++)
	{
		decimal+=binary[i]*pow(2,i);
	}
	printf("decimal is equal to%d",decimal);
}
