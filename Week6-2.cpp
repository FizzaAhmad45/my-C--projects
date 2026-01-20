#include<iostream>
using namespace std;
int main()
{
	int age;
	double income;
	
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your monthly income (PKR): ";
	cin >> income;
	if(age >=21 && age <= 60 && income >= 50000){
	cout << "Ypu are eligible for a loan.\n";
	}else{
	cout << "You are not eligible for alaon.\n";
	}
	return 0;
}
