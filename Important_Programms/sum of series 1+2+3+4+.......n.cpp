#include<stdio.h>
int main()
{
int c, s=0, n;
printf("\n Enter the No. of terms");
scanf("%d", &n);
for(c=1; c<=n; c++)
s+=c;
printf("\n Sum is %d", s);
return 0;
}

