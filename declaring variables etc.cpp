#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr = &num; // pointer stores address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value via pointer (dereferencing): " << *ptr << endl;

    return 0;
}
