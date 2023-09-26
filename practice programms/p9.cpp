#include<stdio.h>
int main()
{
	int no_t,sum=0;
	printf("enter no of terms ");
	scanf("%d",&no_t);
	for(int c=1;c<=no_t;c++)
	
		sum+=c;
	
	printf("sum is equal to %d",sum);
	return 0;
	
}
