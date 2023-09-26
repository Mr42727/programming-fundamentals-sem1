#include<iostream>
using namespace std;
struct student
{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	student s;
	cout<<"enter the information:\n";
	cout<<"enter the name\n";
	cin>>s.name;
	cout<<"enter the roll number\n";
	cin>>s.roll;
	cout<<"enter the marks\n";
	cin>>s.marks;
	cout<<"\n Displaying the Information:\n";
	cout<<"name of the student is:"<<s.name<<endl;
	cout<<"roll number of the student is:"<<s.roll<<endl;
	cout<<"marks of the student is:"<<s.marks<<endl;
	
}
