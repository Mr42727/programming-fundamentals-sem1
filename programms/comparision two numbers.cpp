#include <stdio.h>
int main()
{
 int a,b,c;
 printf(“\n entr two numbers: ”);
 scanf(“%d %d”, &a, &b);
 c=a>b?a:b;
 printf(“\n larger %d”,c);
 return 0;
}