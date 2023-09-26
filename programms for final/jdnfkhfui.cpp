#include<stdio.h>
int main()
{
	int arr[5];
	printf("enter the five numbers");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0;
	int min=0;
	for(int j=0;j<5;j++)
	{
		if (arr[j]>max)
		max=arr[j];
	    if (arr[j]<max)
	    min=arr[j+1];
	}
	printf("max = %d",max);
	printf("min = %d",min);
}
