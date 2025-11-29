#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	(age<13)? cout<<"Child": (age>=13&&age<=19)? cout<<"Teenager" : cout<<"Adult";
	return 0;
	
}
