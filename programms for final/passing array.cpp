#include<stdio.h>
float avg(int []);
int main()
{
	int i,b[5];
	float average;
	printf("enter the age of 5 students");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&b[i]);
	}
	average=avg(b);
	printf("average is equal %f",average);
	return 0;
}
float avg(int a[])
{
	int j;
	float sum=0;
	for(j=0;j<=4;j++)
	{
		sum+=a[j];
		return sum/5;
	}
}
