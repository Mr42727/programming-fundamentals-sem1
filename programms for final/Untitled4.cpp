#include<stdio.h>
int max(int , int , int);
int main()
{
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
   int d=max(a,b,c);
	printf(" maximum %d",d);
}
int max(int x,int y,int z)
{
	int max=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	return max;
}
