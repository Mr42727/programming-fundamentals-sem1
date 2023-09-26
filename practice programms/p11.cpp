#include<stdio.h>
int main()
{

int i = 0; char c = '0';
do {
putchar(c + i);
++i;
} while(i < 5);
}
