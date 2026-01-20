#include<iostream>
using namespace std;
int main()
{
	string name;
	double math, physics, chemistry, total, percentage;
	cout << "Enter student name: ";
	getline(cin, name);
	cout << "Enter marks in Math, Physics, Chemistry (out of 100): ";
	cin >> math >> physics >> chemistry;
	
	total = math + physics + chemistry;
	percentage = (total / 300) * 100;
	
	cout << "\nResults for " << name << ":\n";
	cout << "Total Marks: " << total << "/300\n";
	cout << "Percentage: " << percentage << "%\n";
	
	if (percentage >= 90) cout << "Grade: A\n";
	else if (percentage >= 80) cout << "Grade: B\n";
	else if (percentage >= 70) cout << "Grade: C\n";
	else if (percentage >= 60) cout << "Grade: D\n";
	else cout << "Grade: F\n";
	
	if (percentage > 85) cout << "Eligible for scholarship!\n";
	else cout << "Not eligible for scholarship.\n";
	
	return 0;
 } 
