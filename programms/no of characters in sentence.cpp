#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int noc=0;
	ch=getche();
	while(ch!='.')
	{
		++noc;
		ch=getche();
		
	}
	cout<<"n o c in this sentence are\n"<<noc;
	getch();
	return 0;
}
