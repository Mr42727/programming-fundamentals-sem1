#include<stdio.h>
int main()
{
	int pak;
	int doll;
	int converter;
	float converter2;
	printf("enter the dollar to convert in pakistani rupees\n");
	scanf("%d",&doll);
	converter=226.4*doll;
	printf("price in pakistani rupess is %d \n",converter);
	printf("enter the pakistani rupees to convert in doller\n");
	scanf("%d",&pak);
	converter2 = pak/256.4;
	printf("dollar in pakistani rupees is %.4f",converter2);

	return 0;
	
	
}
