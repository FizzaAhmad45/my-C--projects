#include <iostream>
using namespace std;

int main() {
    int *ptr =NULL ; // Initialize pointer to null

    if (ptr == NULL) {
        cout << "Pointer is null — it does not point to any valid memory." << endl;
    } else {
        cout << "Pointer holds address: " << ptr << endl;
    }

    // Optional: Assign a valid address and test again
    int num = 100;
    ptr = &num;

    if (ptr == NULL) {
        cout << "Pointer is null — it does not point to any valid memory." << endl;
    } else {
        cout << "Pointer now points to valid memory at address: " << ptr << endl;
        cout << "Value at that address: " << *ptr << endl;
    }

    return 0;
}
