#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	while(ch!='.')
	{
		printf("%c\n",ch);
		printf("enter any character\n");
		scanf("%c",&ch);
	}
	return 0;
}