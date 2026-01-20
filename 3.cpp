#include<iostream>
using namespace std;
int main()
{
	int choice;
	double amount, convertedAmount;
	const double PKR_RATE = 280.0; // Example exchange rate USD to PKR
	const double INR_RATE = 83.0; // Example exchange rate USD to INR
	const double EURO_RATE = 0.85; // Example exchange rate USD to EURO
	
    cout << "Currency Converter (USD to):\n";
	cout << "1.PKR (Pakistani Rupee)\n";
	cout << "2.INR (Indian Rupee)\n";
	cout << "3.Euros\n";
	cin >> choice;
	
	cout << "Enter amount in USD: ";
	cin >> amount;
	
	switch (choice){
	case 1:
	convertedAmount = amount * PKR_RATE;
	cout << amount << "USD =" << convertedAmount << " PKR\n";
	break;
	case 2:
	convertedAmount = amount * INR_RATE;
	cout << amount << "USD =" << convertedAmount << " INR\n";
	break;
	case 3:
	convertedAmount = amount * EURO_RATE;
	cout << amount << "USD =" << convertedAmount << " Euros\n";
	break;
	default:
	cout << "Invalid choice!\n";
}
return 0;
}
