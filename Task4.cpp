#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 5;
	cout << "Operations on a = " << a<< " and b = " << b << endl;
	cout << "Addition: " << a + b << endl;
	cout << "Multiplication: " << a * b << endl;
	cout << "Division: " << (b != 0 ? a / b : 0) << " (integer division)" << endl;
	return 0;
}
