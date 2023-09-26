#include<stdio.h>
int main()
{
int counter =1, number, max,nv;
printf("enter the number of values ");
scanf("%d",&nv);
printf("Enter an integer number\n");
scanf("%d", &max);
while(counter <nv)
{
printf("Enter an integer number\n");
scanf("%d", &number);
if(number > max)
max = number;
counter++;
}
printf("The maximum number is %d\n", max);
return 0;
}

