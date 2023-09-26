#include<stdio.h>
float avg_age(int[]);
int main()
{
	int i,b[5];
	float avg;
	printf("enter the age of 5 students");
	for(i=0;i<=4;i++)
	scanf("%d",&b[i]);
	float average=avg_age(b);
	printf("average of 5 students is %f",average);
	return 0;
}
float avg_age(int a[])
{int j, i;
float sum=0;
for(j=0;j<5;j++)
sum+=a[i];
return sum/5;
}
