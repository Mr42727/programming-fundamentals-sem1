#include<stdio.h>
int main()

{
int c = 0;
while(c<=5)
{
c++;
if(c==3)
continue;
printf("\t %d", c);
printf("\n ");
}
return 0;
}


