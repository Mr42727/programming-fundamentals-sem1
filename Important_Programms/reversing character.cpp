#include<stdio.h>
void print_backward()
{
	char ch;
	scanf("%c",&ch);
	if(ch!='.');
	{
		print_backward();
		printf("%c",ch);
		
		}	
}
int main()
{
	char(print_backward);
	
	
}
