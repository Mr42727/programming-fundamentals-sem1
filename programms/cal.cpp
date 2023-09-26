#include<stdio.h>
int main()
{
	int s1,s2,s3,sum;
	printf("Enter the numbers of three subjects");
	scanf("%d%d%d",&s1,&s2,&s3);
	sum=s1+s2+s3;
	float per=(sum*100)/300;
	if(per>=90&&per<100)
	printf("your grade is A+");
	else if(per>=80&&per<90)
	printf("your is A");
	else if(per>=70&&per<80)
	printf("your grade is B");
	else if(per>=60&&per<50)
	printf("your grade is C");
	else printf("you are fail");
	return 0;
}
	