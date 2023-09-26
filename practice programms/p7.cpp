#include<stdio.h>
int main()
{
	printf("today date is %s\n",__DATE__);
	printf("now time is %s\n",__TIME__);
    printf("file name is %s",__FILE__);
	return 0;
}
