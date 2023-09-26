#include<stdio.h>
int main()
{
    

	{
	int num,sum;
	int count;
	do
	{
	printf("enter number\n");
	scanf("%d",&num);
    count++;
	sum=sum+num;
		if (num!=0)
		{
			printf("total values = %d\n",count);
			printf("sum of all numbers =%d\n ",sum);
		}
	}
	while("n>0");
	return 0;
}
}
