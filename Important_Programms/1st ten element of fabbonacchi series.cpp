#include<stdio.h>
int main()
{
	int i;
	int fab[10];
	fab[0]=0;
	fab[1]=1;
	for(i=2;i<10;i++)
	{
		fab[i]=fab[i-1]+fab[i-2];
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",fab[i]);
	}
}
