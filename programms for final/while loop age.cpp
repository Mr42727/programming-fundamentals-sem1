#include<stdio.h>
int main()
{
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	while(age!=-1)
	{
		printf("your age is %d ",age); 
		printf("\nenter your age");
     	scanf("%d",&age);
	}
}
