#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	getchar();
	while(ch!='.')
	{
		putchar(ch);
		printf("enter any key\n");
		getchar(ch);
	}
	return 0;
}