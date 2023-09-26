#include<stdio.h>
int main()
{
	int num,range=0 ,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	
	//by for loop
	
/*	for(range=1;range<=num;range++)
	{
		printf("\n %d",range);
	}
	*/
	
	
	//by while loop
	
	
/*	while(range<=num)
	{
		printf("%d\n",range);
		range++;
	}*/
	
	
	//by do while loop
	do{
		printf("%d\n",range);
		range=range+1;
		 sum+=range;
	}
	while(range<=num);
	printf("the sum is eqaul to %d",sum);
	
}
