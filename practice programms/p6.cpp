#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter an integer ";
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		sum+=i;
	}
	cout<<"sum is equal to"<<sum;
	return 0;
}
