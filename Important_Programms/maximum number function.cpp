#include<stdio.h>
#define max 50
int getdata(int *,int);
void show (int*,int);

int main()
{
int arr[max],n;
n=getdata(arr,max);
show(arr,n);
//return 0;	
}

	int getdata(int *arr,int n)
	int x,i=0;
	printf("enter array element");
	while(i<n);
	scanf("%d",&x);
	*(a+i)=x;
	i++;
}
rturn 0;
void show (int a, int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("\n %d",*(a+i));
}
