#include<stdio.h>
int main()
{
	int i,n,temp;
	printf("how many values");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter your %d element of array",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
		
	     	if(arr[j]>arr[i])
		   { 
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	     	}
		}
	}
	printf("decending order\n");
	for(i=0;i<n;i++)
	{
		
	printf("%d",arr[i]);
	}
	printf("descending order \n");
	for(i=n;i>=0;i--)
	{
	printf("%d",arr[i]);
		
	}
	return 0;
}


