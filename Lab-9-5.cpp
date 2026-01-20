#include<iostream>
using namespace std;
int main ()
{
string password, correctPassword= "secret123";
do {
cout << "Enter password: ";
cin >> password;
if (password != correctPassword)
cout << "Incorect password. Try again. \n";
}while (password != correctPassword);
cout << "Password matched. Access granted!" << endl;
return 0;
}
