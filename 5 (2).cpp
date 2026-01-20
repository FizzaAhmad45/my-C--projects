#include<iostream>
using namespace std;
int main (){
double balance = 1000; //Initial Balance
int choice;
double amount;

while (true){
//Display Menu
cout << "\nSimple Banking System Menu:" << endl;
cout << "1. Deposit Money" << endl;
cout << "2. Withdraw Money" << endl;
cout << "3. Check Balance" << endl;
cout << "4. Exit" << endl;
cout << "Enter your choice: ";
cin >> choice;

switch (choice) {
	case 1: // Deposit Money
	cout << "Enter amount to deposit: ";
	cin >> amount;
	if (amount > 0) {
	balance += amount;
	cout << "Deposit sucessfull. New balance: " << balance << endl;
	}else {
	cout << "Invalid amount. Please enter a positive value." << endl;
	}
	break;
	case 2: // Withdraw Money
cout << "Enter amount to withdraw: ";
cin >> amount;
if (amount > 0 && amount <= balance) {
balance -= amount;
cout << "Withdrawal successful. New balance: ";
}else if (amount > balance) {
cout << "Invalid amount. Please enter a positive value." << endl;
}
break;
case 3: // Check Balance
cout << "Current balance: " << balance << endl;
break;
case 4: // Exit
cout << "Exiting the program. " << endl;
return 0;
default:
cout << "Invalid choice. Pleasetry again. " << endl;
} 
}
return 0;
}
