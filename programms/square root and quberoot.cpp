#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter an integer";
	cin>>x;
	int sq=x*x;
	int q=x*x*x;
	int qp=x*x*x*x;
	int qs=x*x*x*x*x;
	cout<<x<<"^2="<<sq<<endl;
	cout<<x<<"^3="<<q<<endl;
	cout<<x<<"^4="<<qp<<endl;
	cout<<x<<"^5="<<qs<<endl;
	return 0;
}
