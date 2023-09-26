#include<stdio.h>
int main()
{
	int n, c;
	int f=1;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0)
	goto end;
	c=1;
	loop:
	f=f*c;
	c++;
	if(c<=n)
	goto loop;
	printf("factorial is equal to %d ",f);
	end:
		return 0;
}
