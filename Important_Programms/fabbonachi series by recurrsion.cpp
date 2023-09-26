#include <stdio.h>
#include <stdlib.h>
int fib(int); 
int main()
{
int i,j;
printf("\n Enter the number of terms: ");
scanf("%d",&i);
if(i < 0)
{
printf("\n Error – Number of terms cannot be negative\n");
exit(1);
}
else
printf("\n Fibonacci sequence for %d terms is:",i);
for( j=1; j<=i; ++j)
printf("%d\t",fib(j)); 
return 0;
}
int fib(int val)
{
if(val <= 2)
return 1;
else
return(fib(val - 1) + fib(val - 2));
}
