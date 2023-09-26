#include<stdio.h>
int main()
{
	int noc=0;
	char ch;
	ch=getchar();
	while(ch!='.')
	{
		++noc;
		ch=getchar();
	}
	printf("nof is equal to %d",noc);
}
