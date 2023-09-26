#include<stdio.h>
int main()
{
	int pak;
	int dollar;
	printf("enter the dollar to convert in pakistani rupees\n");
	scanf("%d",&dollar);
	printf("price in pakistani rupess is %d \n",dollar*226.4);
	printf("enter the pakistani rupees to convert in doller\n");
	scanf("%d",&pak);
		printf("dollar in pakistani rupees is %f",pak/226.4);
		return 0;
	}
