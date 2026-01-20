#include<iostream>;
 using namespace std;
int main ()
{
int num;
while (true) {
cout << "Enter a positive number: ";
cin >> num;
if (num > 0) {
cout << "You entered: " << num << endl;
break;
} else {
cout << "Enter: Please enter a positive number." << endl;
}
}
return 0;
}
