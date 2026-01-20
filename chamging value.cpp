#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Before change: num = " << num << endl;

    *ptr = 99; // Modify value via pointer

    cout << "After change: num = " << num << endl;

    return 0;
}
