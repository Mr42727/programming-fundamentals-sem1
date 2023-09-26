#include<stdio.h>
int main()
{
	int ch, n;
	ch=getchar();
	n=(ch>='a')&&(ch<='z')?putchar(ch+'A'-'a'):putchar(ch);
	putchar(n);
	return 0;
}
