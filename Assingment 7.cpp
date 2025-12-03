#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout << "Enter marks (out of 100) : ";
	cin >> marks;
	if (marks >= 90) cout << "Grade : A+\n";
	if (marks >= 80 && marks <= 89) cout << "Grade: A\n";
	if (marks >= 70 && marks <= 79) cout << "Grade: B\n";
	if (marks >= 60 && marks <= 69) cout << "Grade: C\n";
	if (marks < 60) cout << "Grade: Fail\n";
	return 0;
}
	
