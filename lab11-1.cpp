#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
    cin >> arr[i];
    }

    int largest = arr[0]; // Assume first element is largest

    for (int i = 1; i < n; i++) {
if (arr[i] > largest) {
largest = arr[i];
    }
    }

    cout << "Largest number in the array is: " << largest << endl;

    return 0;
}
