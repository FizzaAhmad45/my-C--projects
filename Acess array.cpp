#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int *ptr = arr; // pointer points to first element

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}
