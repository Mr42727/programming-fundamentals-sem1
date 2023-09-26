#include<stdio.h>
int fab(int n )
{
    if(n==0 || n==1)
    return 1;
	else{
		return fab(n-1)+fab(n-2);
	}
}
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	printf("fabbonaci serious is equal to \n");
	for(int i=0;i<n;i++)
	{
		printf("%d",fab(i));
	}
	
}
