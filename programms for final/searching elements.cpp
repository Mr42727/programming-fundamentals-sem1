#include<stdio.h>
int main()
{
	int n,i,s,m;
	printf("how many numbers you want to enter\n ");
	scanf("%d",&n);
	int arr[n];
	printf("now enter your elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("elements that you enterd are\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n enter a digit you want to search\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
		if(arr[i]==s)
	{
		printf("%d is found at  %d\n",s,i);
		m=1;
	}
	if (m==0)
	{
		
	printf("not found");
	}
	return 0;
	
}
