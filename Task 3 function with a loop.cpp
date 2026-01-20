#include <iostream>
using namespace std;

// Function: calculateFactorial() - returns long long to handle large numbers
long long calculateFactorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; // Error indicator
    }

    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number;
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    long long result = calculateFactorial(number);
    if (result != -1) {
        cout << "Factorial of " << number << " is: " << result << endl;
    }

    return 0;
}
