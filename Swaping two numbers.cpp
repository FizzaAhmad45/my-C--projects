#include <iostream>
using namespace std;

// Function to swap two integers using pointers
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapNumbers(&x, &y); // Pass addresses

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
