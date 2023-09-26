#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	while(ch!=',')
	{
		printf("%c",ch);
		printf("enter any key\n");
		scanf("%c",&ch);
	}
	return 0;
}
