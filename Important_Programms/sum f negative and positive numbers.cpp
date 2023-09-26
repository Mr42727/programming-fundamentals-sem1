#include<stdio.h>
int main()
{
	int a,n1=0,n2=0,s1=0,s2=0;
	printf("enter the numbers and (0 to quite)");
	do
	{
		printf("enter a number\n");
		scanf("%d",&a);
	
	if(a>0)
    	{
		printf("you enterd %d which is a positive number\n",a);
		n1++;
		s1+=a;
	    }
	else 
	{ if(a<0)
		{
		printf("you enterd %d which is negative number\n ",a);
		n2++;
		s2+=a;
		}
    
	else if(a=0)
	{
	printf("you enterd 0");
	}
   } 
}
	while(a!=0);
	printf("you enterd %d positive numbers\n",n1);
	printf("sum of positive numbers is%d\n",s1);
	printf("you enterd %d negative  numbers\n",n2);
	printf("sum of negative numbers is%d\n",s2);
return 0;
}
	
