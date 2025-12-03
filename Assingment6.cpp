#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three numbers: ";
	cin >> a >> b >> c;
	if (a >= b && a >= c) cout << "Largest: " << a << "\n";
	if (b >= a && b >= c) cout << "Largest: " << b << "\n";
	if (c >= a && c >= a) cout << "Largest: " << c << "\n";
	return 0;
}
