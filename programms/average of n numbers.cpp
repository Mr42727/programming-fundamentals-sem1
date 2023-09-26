#include<stdio.h>
int main()
{
  int total,a,count=1,sum=0;
  float avg;
  printf("How many numbers:");
  scanf("%d",&total);
  while(count<=total)
{
  printf("\nEnter the number:");
  scanf("%d",&a);
  sum+=a;
  count++;
}
  avg=(float)sum/total;
  printf("The average is %f",avg);
  return 0;
}
