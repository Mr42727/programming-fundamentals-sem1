#include <stdio.h>
int main()
{
 int a,b,c;
 printf(“enter two numbers : \n ”);
 scanf(“%d %d”, &a, &b);
 c=a>b?a:b;
 printf(“larger number is \n  %d”,c);
 return 0;
}