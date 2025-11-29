#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	(num%2==0)? cout<<"The number "<<num<<" is even":cout<<"The number "<<num<<" is odd";
	return 0;
}
