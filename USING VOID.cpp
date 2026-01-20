#include <iostream>
using namespace std;

int main() {
    int num = 42;
    void *vptr = &num; // void pointer can hold any address

    // To access the value, we must cast back to original type
    int *intptr = static_cast<int*>(vptr); // Safe cast using static_cast
    cout << "Value via void pointer (after casting): " << *intptr << endl;

    // Alternative: direct cast in one line
    cout << "Value directly casted: " << *(static_cast<int*>(vptr)) << endl;

    return 0;
}
