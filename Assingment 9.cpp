#include<iostream>
using namespace std;
int main()
{
	double balance, withdraw;
	cout << "Enter withdrawal amount: ";
	cin >> withdraw;
	if (withdraw <= balance){
		balance -= withdraw;
		cout << "Remaining balance: " << balance << "\n";
	} else {
		cout << "Insufficient balance.\n";
	}
	return 0;
}
