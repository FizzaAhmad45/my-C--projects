#include<iostream>
using namespace std;
int main()
{
	double salary;
	int experience;
	cout << "Enter salary ($): ";
	cin >> salary;
	cout << "Enter years of experience: ";
	cin >> experience;
	if (salary >= 25000 || experience > 5) {
	cout << "Eligible for loan.\n";
	}else{
		cout <<"Not eligible for loan.\n";
	}
	return 0;
}
