#include<iostream>
#include <string>
using namespace std;

	void displayMenu() {
	cout << "Main Menu Items\t\tSub Menus\n";
	cout << "Breakfast\t\t- Anda Paratha (Rs.40)\n";
	cout << "\t\t\t- Nan Channy (Rs. 60)\n";
	cout << "\t\t\t- Siri Paye (Rs.150)\n";
	cout << "\t\t\t- Tea (Rs. 15)\n";
	cout << "Lunch\t\t- Chicken Karahi (Rs. 1050/KG)\n";
	cout << "\t\t\t- Mutton Karahi (Rs. 1050/KG) \n";
	cout << "Egg FriedRice (Rs. 450/plate\n)";
	cout << "BBQ (Rs.1050/dozen\n)";
	cout << "Dinner\t\t- Chicken Karahi (Rs. 1050/KG)\n";
	cout << "\t\t\t- Mutton Karahi (Rs. 1800/KG)\n";
	cout << "\t\t\t- Egg Fried Rice (Rs. 450/plate)\n";
	cout << "\t\t\t- BBQ (Rs. 1050/dozen)\n";
	cout << "\t\t\t- Sajji (Rs. 800/KG)\n";
	}
	int main (){
	int choiceMain, choiceSub;
	float quantity, totalBill = 0;
	char cont;
	
	displayMenu();
	
	do{
	cout << "Choose Main Menu (1-Breakfast, 2-Lunch, 3-Dinner): ";
	cin >> choiceMain;
	if (choiceMain == 1){
	cout << "Choice Sub Menu (1-Anda Paratha, 2-Nan Channy, 3-Siri paye, 4-Tea: ";
	cin >> choiceSub;
	cout << "Enter quantity: ";
	cin >> quantity;
	
	if(choiceSub == 1 ) totalBill += 40 * quantity;
	else if (choiceSub == 2) totalBill += 60 * quantity;
	else if (choiceSub == 3) totalBill += 150 * quantity;
	else if (choiceSub == 4) totalBill += 15 * quantity;
	} 	
	else if (choiceMain == 2 || choiceMain == 3){
	cout << "Choose Sub Menu ";
	if (choiceMain == 2) cout << "(1-Chicken Karahi, 2-Mutton Karahi, 3-Egg Fried Rice, 4-BBQ): ";
	else cout << "(1-Chicken Karahi,2-Mutton Karahi, 3-Egg Fried Rice, 4-BBQ 5-Sajji): ";
	cin >> choiceSub;
	cout << "Enter quantity (KG for Karahi/Sajji,plate for Egg Fried Rice, dozen for BBQ): ";
	cin >> quantity;
	if (choiceSub == 1) totalBill += 1050 * quantity;
	else if (choiceSub == 2) totalBill += 1800 * quantity;
	else if (choiceSub == 3) totalBill += 450 * quantity;
	else if (choiceSub == 4) totalBill += 1050 * quantity;
	else if (choiceSub == 5 && choiceMain == 3) totalBill += 800 * quantity;
	}
	cout << "Do you want ti order more? (y/n): ";
	cin >> cont;
} while (cont == 'y'|| cont =='y');

cout << "Total Bill: Rs." << totalBill << endl;
return 0;
}

