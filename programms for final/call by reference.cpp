#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return ;
	
}
int incr(int *p)
{
	int z=*p+1;
	return z ;
}
int main()
{
	int a=4,b=5;
	printf("a and b before calling %d %d \n",a,b);
	swap(&a,&b);
	printf("value of a and b after calling function%d %d\n",a,b);
	int p = 9;
	incr(&p);
	printf("%d",p);
	return 0;
}
