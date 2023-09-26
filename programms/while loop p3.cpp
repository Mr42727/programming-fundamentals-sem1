#include<stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	while(age!=-1)
	{
		printf("your age is %d\n",age);
		printf("enter your age\n");
		scanf("%d",&age);
	}
	return 0;
}