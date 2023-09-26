#include<stdio.h>
int factorial(int number)
{

if(number == 0 || number == 1)
{
	return 1;
}
else{
 return (number *factorial(number -1));	
}
}
int main()
{
	int n;
	printf("enter a number to find a factorial of number");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
