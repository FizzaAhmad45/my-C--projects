#include <iostream>
using namespace std;

// Function: checkEvenOdd() - void, takes int parameter
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }
}

int main() {
    checkEvenOdd(4);   // Even
    checkEvenOdd(7);   // Odd
    checkEvenOdd(0);   // Even
    checkEvenOdd(-3);  // Odd
    return 0;
}
