#include<iostream>
using namespace std;
int main()
{
	int n,rev_num=0,reminder;
	cout<<"enter an interger";
	cin>>n;
	while(n!=0)
	{
		reminder=n%10;
		rev_num=rev_num*10+reminder;
		n=n/10;
		
	}
	cout<<"reversed number ="<<rev_num;
}
