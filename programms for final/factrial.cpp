#include<stdio.h>
int main()

{
int n,f=1;
printf("enter a number");
scanf("%d",&n);
for(int c=0;c<n;c++)
{
	f*=c;
	
	}	
	printf("factorial is equal to %d",f);
}
