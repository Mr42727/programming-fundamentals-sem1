#include<stdio.h>
int main()
{
	int  a,n1=0,n2=0,s1=0,s2=0;
	printf("enter positive and negative numbers (0) for quite\n");
	do
	{
		printf("enter a number \n");
		scanf("%d",&a);
		if (a>0)
		{
			printf("you entered %d which is positive",a);
			n1++;
			s1+=a;
		}
		else
		if(a<0)
		{
			printf("you entered %d which is negative ",a);
			n2++;
			s2+=a;
		}
		else if(a=0)
		{
			printf("you entered 0");
		}
		
	}
	while(a!=0);
	
	printf("total number of positive numbers you have entered  %d\t \n",n1);
	printf("total number of negtive numbers you have entered  %d \t\n",n2);
	printf("sum of  positive  numbers you have entered  %d\n ",s1);
	printf(" sum of negative  numbers you have entered  %d \n",s2);
	
	
	return 0;
}
