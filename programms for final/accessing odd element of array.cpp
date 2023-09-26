#include<stdio.h>
int main()
{
//	int n;
//     printf("how many numbers you want to enter ");
//	scanf("%d",&n);
//	int arr[n];
//	printf("enter elements");
//	for ( int i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
	int arr[]={ 2,3,4,5,6};
	printf("odd elements of array is equals ");
	for ( int i=0; i<=5; i++)
	{
		if(arr[i]%2==0)
		printf("%d ",arr[i]);
//		printf ("\n");
	}
}
