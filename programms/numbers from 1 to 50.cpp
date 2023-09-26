#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n=1;
	while(n<=50)
	{
		cout<<n<<" ";
		if(n%6==0)
		cout<<endl;
		n++;
	}
	return 0;
}
