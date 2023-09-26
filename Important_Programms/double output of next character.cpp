#include<stdio.h>
int main(void)
{
int ch;
ch=getchar();
putchar(++ch); 
putchar(ch++); 
putchar(ch); 
putchar(ch++);
putchar(ch); 
return 0;
}
