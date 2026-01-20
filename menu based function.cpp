#include <iostream>
#include <iomanip>
using namespace std;

// Function declarations
void displayMenu();
int getChoice();
int getQuantity();
double calculateItemCost(double price, int quantity);
double calculateFinalBill(double subtotal, double taxRate = 0.10); // 10% default tax
void showFinalBill(double subtotal, double total);

int main() {
    const int MENU_SIZE = 5;
    string items[MENU_SIZE] = {"Burger", "Pizza", "Pasta", "Salad", "Fries"};
    double prices[MENU_SIZE] = {5.99, 8.99, 7.50, 4.99, 2.99};

    double totalBill = 0.0;
    int choice, quantity;
    double itemCost;

    cout << "=== Welcome to Our Restaurant ===" << endl;

    do {
        displayMenu();
        choice = getChoice();

        if (choice == 0) {
            cout << "\nCalculating your final bill..." << endl;
            break;
        }

        if (choice < 1 || choice > MENU_SIZE) {
            cout << "Invalid choice! Please select from 1 to " << MENU_SIZE << " or 0 to exit." << endl;
            continue;
        }

        quantity = getQuantity();
        itemCost = calculateItemCost(prices[choice - 1], quantity);
        totalBill += itemCost;

        cout << "Added: " << items[choice - 1] << " x " << quantity 
             << " = $" << fixed << setprecision(2) << itemCost << endl;
        cout << "Current Total: $" << totalBill << endl << endl;

    } while (true);

    // Calculate and display final bill with tax
    double finalAmount = calculateFinalBill(totalBill);
    showFinalBill(totalBill, finalAmount);

    return 0;
}

// Function definitions

void displayMenu() {
    cout << "\n--- Menu ---" << endl;
    cout << "1. Burger     - $5.99" << endl;
    cout << "2. Pizza      - $8.99" << endl;
    cout << "3. Pasta      - $7.50" << endl;
    cout << "4. Salad      - $4.99" << endl;
    cout << "5. Fries      - $2.99" << endl;
    cout << "0. Exit & Calculate Final Bill" << endl;
    cout << "Enter your choice (0-5): ";
}

int getChoice() {
    int choice;
    cin >> choice;
    return choice;
}

int getQuantity() {
    int qty;
    cout << "Enter quantity: ";
    cin >> qty;
    return qty;
}

double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

double calculateFinalBill(double subtotal, double taxRate) {
    return subtotal + (subtotal * taxRate);
}

void showFinalBill(double subtotal, double total) {
    cout << "\n===============================" << endl;
    cout << "       FINAL BILL SUMMARY      " << endl;
    cout << "===============================" << endl;
    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl;
    cout << "Tax (10%): $" << (total - subtotal) << endl;
    cout << "-----------------------------" << endl;
    cout << "TOTAL: $" << total << endl;
    cout << "===============================" << endl;
    cout << "Thank you for dining with us!" << endl;
}
