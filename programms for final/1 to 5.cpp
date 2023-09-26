#include<stdio.h>
int main()
{
	int x=1;
	while(x<=50)
	{
		printf("%d ",x);
		if(x%5==0)
		printf("\n");
		x++;
	}
	
}
