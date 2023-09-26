#include<stdio.h>
int main()
{
	int arr[]={5,6,7,8,9};
	//printf("%u%u%d",arr,&arr,&arr[0]);
	int * p =&arr;
	
	printf("%d",p);
	return 0;
}
