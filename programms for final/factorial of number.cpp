#include<stdio.h>

int main()
{
int n, c;
int f=1;
printf("\n Enter the number:");
scanf("%d",&n);
for(c=1;c<=n;++c)
f*=c;
printf("\n Factorial is %d",f);
return 0;
}
