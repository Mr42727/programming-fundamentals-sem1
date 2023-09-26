#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
	int a=2,b=4;
	printf("a = %d b=%d",a,b);
	swap(&a,&b);
		printf("a = %d b=%d",a,b);
}
