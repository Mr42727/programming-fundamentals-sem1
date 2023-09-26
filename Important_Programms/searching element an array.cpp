#include<stdio.h>
int main()
{
	int n,m,s;
	int arr[6];
  	printf("entr the element of array");
  	for(int i=0;i<=6;i++)
  	scanf("%d",&arr[i]);
  	printf("element of array is \n");
  	for(int i=0;i<=6;i++)
  	printf("%d\t\n",arr[i]);
  	printf("enter the number you want to search\n");
  	scanf("%d",&s);
  	for(int i=0;i<=6;i++)
  	if(arr[i]==s)
  	{
	  printf("the %d  is found at %d",s,i);
	  m=1;
	  }
	  if (m==0)
	  {
	  	printf("not found");
	  }
	  
	  return 0;	
}
