#include<iostream>
using namespace std;
int main()
{
	// Prices of 5 items
	double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
	// Calculate subtotal
	double subtotal = item1 + item2 + item3 + item4 + item5;
	double tax = subtotal * 0.06;  // 6% sales tax
	double total = subtotal + tax;
	// Show results
	cout << "Subtotal: $" << subtotal << endl;
	cout << "Sales Tax (6%): $"  << subtotal << endl;
	cout << "Total Amount: $" << total << endl;
	return 0;
}
