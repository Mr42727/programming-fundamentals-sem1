#include<stdio.h>
int main()
{
	int arr[10],m,s,n,i;
	printf("enter the no of element you want to store\n ");
	scanf("%d",&n);
	printf("enter the element of matrices");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	printf("%d\n",arr[i]);
	printf("enter the number you want to search");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	if(arr[i]==s)
	{
		printf("the number is found at %d",i);
		m=1;
	}
	if(m==0)
	{
		printf("not found");
	}
}
