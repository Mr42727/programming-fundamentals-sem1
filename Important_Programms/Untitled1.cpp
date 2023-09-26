#include<stdio.h>
int max(int,int,int)
 int main()
{
	int a,b,c;
	printf("enter three integers");
	scanf("%d%d%d",&a,&b,&c);
	printf("maximum is =%d",max(a,b,c));
	return 0;
	
}
int max(int x, int y ,int z)
{
	int max;
	if(x>y)
	max=x;
	if(y>z)
	max=y;
	else
	max=z;
	return max;
}
